#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10

int TheSort(int m[]);

int main()
{
	int arr[SIZE] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
		arr[i] = rand() % 100;
	printf("The array : ");
	for (int i = 0; i < SIZE; i++)
		printf("[%02d] ", i);
	printf("\n            ");
	for (int i = 0; i < SIZE; i++)
		printf("%3d  ", arr[i]);
	printf("\n\nThere is the maximum : %d", TheSort(arr));
}

int TheSort(int m[])
{
	int tmp = 0;
	for (int i = 0; i < SIZE; i++)
		if (m[i] > tmp) tmp = m[i];
	return tmp;
}