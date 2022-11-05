#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996)

struct item {
    int val;
    struct item* next;
    struct item* prev;
};

struct item* head=NULL;
struct item* tail=NULL;

void buildList(int);
void bubbleSort();
void printTheList();
void switchItems(struct item*);

int main_1_1_6()
{
    buildList(5);
    buildList(3);
    buildList(7);
    buildList(2);
    buildList(1);
    buildList(9);
    buildList(11);

    bubbleSort();
    printTheList();

}

void bubbleSort()
{
    struct item* curr = head;
    struct item* curr1 = head;

    while (curr)
    {
        while (curr1->next)
        {
            if (curr1->val > curr1->next->val)
            {
                switchItems(curr1);
                curr1 = curr1->prev;
            }
            curr1 = curr1->next;
        }
        curr1 = head;
        curr = curr->next;
    }
    //5,3,7,2,1,9,11
}
void switchItems(struct item* item)
{
    struct item* temp = NULL;
    if (item == NULL)
    {
        return;
    }
    if (item->next->next == NULL && item->prev == NULL)
    {
        item->next->prev = NULL;
        item->next->next = item;
        item->prev = item->next;
        item->next = NULL;
        head = item->prev;
        tail = item;
        return;
    }
    else if (item->next->next == NULL)
    {
        item->next->prev = item->prev;
        item->next->next = item;
        item->prev->next = item->next;
        item->prev = item->next;
        item->next = NULL;
        tail = item;
        return;
    }
    else if (item->prev == NULL)
    {
        item->prev = item->next;
        item->next->next->prev = item;
        item->next = item->next->next;
        item->prev->next = item;
        item->prev->prev = NULL;
        head = item->prev;
        return;
        //5 2 3
    }
    else
    {
        item->prev->next = item->next;
        item->next->prev = item->prev;
        item->next->next->prev = item;
        item->prev = item->next;
        item->next = item->next->next;
        item->prev->next = item;
        return;
        //1 2  6 4 8
    }
}
void buildList(int val) {
    struct item* curr = (struct item*)malloc(sizeof(struct item));
    curr->val = val;
    if (head == NULL) {
        head = curr;
        tail = curr;
        curr->next = NULL;
        curr->prev = NULL;
    }
    else {

        curr->next = NULL;
        curr->prev = tail;
        tail->next = curr;
        tail = curr;
    }
}
void printTheList() {
    struct item* curr = head;
    while (curr) {
        printf("val is:%d\n", curr->val);
        curr = curr->next;
    }
}