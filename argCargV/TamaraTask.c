#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996) 

void printNum(int);
void maskBits(int);

int main_1_3()
{
	int num = 0;
	printf("pls enter a number");
	scanf("%d", &num);
	printNum(num);
	printf("\n");
	maskBits(num);
}

void printNum(int bit)
{
	int bitNum = 0;
	for (int i = 0; i < 8; i++)
	{
		bitNum = 0;
		if (8 - i == bit)
		{
			bitNum++;
		}
		printf("%d", bitNum);
	}
}
void maskBits(int num)
{
	unsigned char num1= 0b00000001;
	unsigned char mask = 0b10000000;
	num1 <<= mask - 1;

	for (int i = 0; i < 8; i++)
	{
		if (num1 & mask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		mask >>= 1;
	}
}
