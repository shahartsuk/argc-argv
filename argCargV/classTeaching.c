#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996) 

int main_1_2(int argc, char* argv[])
{
	printf("Start \n");

	printf("%d %s %s\n", argc, argv[0], argv[1]);

	printf("End\n");
	return;
}