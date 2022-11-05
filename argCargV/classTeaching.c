#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996) 

int main_1_5(int argc, char* argv[])
{
	printf("Start \n");

	for (int i = 0; i < argc; i++)
	{
		printf("%s\n",argv[i]);

	}
	getchar();

	printf("End\n");
	return;
}