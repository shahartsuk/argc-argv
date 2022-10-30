#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning (disable:4996) 

void testCopy(char[]);
void checkSize(char[]);

int main_1_1(int argc, char*argv[])
{
	int a=0;
	int b = 0;
	char fileName[100];
	//a = atoi(argv[1]);
	//b = atoi(argv[2]);
	//printf("%d+%d=%d\n", a, b, a + b);
	printf("Start \n");
	printf("%d %s %s\n", argc, argv[0], argv[1]);
	
	testCopy(argv);

	printf("End\n");
	
	//testCopy(fileName);
	//checkSize(fileName);
	return 0;
}
// open a file for the exe
// read the file to calculate his size
void testCopy(char* argv[])
{
	FILE* f = fopen(argv[1], "r");
	FILE* f2 = fopen(argv[1], "w");
	int count = 0;
	char text[100];
	char temp;
	char* number;
	if (!f)
	{
		printf("File error1");
		exit(1);
	}
	if (!f2)
	{
		printf("File error2");
		exit(1);
	}

	while (fread(&temp, sizeof(char), 1, f))
	{
		count++;
	}
	number = (char*)malloc(count);
	fclose(f);
	f = fopen(argv[1], "r");
	printf("%s", argv[1]);
	printf("%s", argv[2]);
	fread(number, sizeof(char), count, f);
	fwrite(number, sizeof(char), count, f2);
	fclose(f);
	fclose(f2);
	free(number);
}