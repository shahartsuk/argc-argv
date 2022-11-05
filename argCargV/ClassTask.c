#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996) 

/*
typedef struct student {
	int age;
	char firstName[100];
	char lastName[100];
	struct student* next;
	struct student* prev;
}t_student;

void buildList(t_student*);
void saveInFile(char[],char*[],int);
void loadFromFile(char[]);
void printTheList();
void freeList();


t_student* head = NULL;
t_student* tail = NULL;

int main_1_6(int argc, char* argv[])
{
	char fileName[1000];

	printf("Start \n");
	strcpy(fileName, "C:\\Users\\shaha\\source\\repos\\argCargV\\students.txt");
	saveInFile(fileName, argv, argc);
	loadFromFile(fileName);

	printf("%d %s %s\n", argc, argv[0], argv[1]);
	printTheList();
	freeList();
	printf("End\n");


	return;
}
void saveInFile(char fileName[],char* argv[],int argc)
{
	char fileText[1000];
	FILE* f = fopen(fileName, "w");
	if (!f)
	{
		printf("error cant open file to save");
		exit(1);
	}
	for ( int i = 1; i < argc; i++)
	{
		strcpy(fileText, argv[i]);
		fputs(fileText, f);
	}
	fclose(f);
	return;
}
void loadFromFile(char fileName[])
{
	t_student* currStudent = NULL;
	int count=0;
	char str[1000];
	char str1[1000];
	char* token;
	FILE* f = fopen(fileName, "r");
		if (!f)
		{
			printf("error cant open file to load");
			exit(1);
		}
		fgets(str, 1000, f);
		// get the first token
		token = strtok(str, " ");

		//walk through other tokens
		while (token != NULL) {
			count++;
			if (count == 1)
			{
				currStudent = (t_student*)malloc(sizeof(t_student));
				strcpy(str1, token);
				currStudent->age = atoi(str1);
			}
			if (count == 2) {
				strcpy(currStudent->firstName, token);
			}
			if (count == 3) {
				strcpy(currStudent->lastName, token);
				count = 0;
				buildList(currStudent);
			}
			token = strtok(NULL, " ");
		}
		return;
}
void buildList(t_student* curr) {
	curr->next = curr->prev = NULL;
	if (head == NULL)
	{
		head = curr;
		tail = curr;
		return;
	}
	else {
		curr->prev = tail;
		tail->next = curr;
		tail = curr;
		return;
	}

}
void freeList()
{
	t_student* freeTheList;
	while (head)
	{
		freeTheList = head;
		head = head->next;
		free(freeTheList);
	}
}
void printTheList()
{
	t_student* printTheList=head;
	while (printTheList)
	{
		printf("%d\n%s\n%s\n", printTheList->age, printTheList->firstName, printTheList->lastName);
		printTheList = printTheList->next;
	}
	return;
}
*/