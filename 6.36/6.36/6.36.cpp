#include <string.h>
#include<stdio.h>
#include<stdlib.h>
void stringReverse(char str[]);

int main()
{
	char str[50];
	printf("Input a sentence : ");
	scanf("%s", str);
	printf("That's a up-side-down sentence : ");
	stringReverse(str);
}

void stringReverse(char str[])
{
	for (int i = strlen((char *)str) - 1; i >= 0; i--)
		printf("%c", str[i]);
}