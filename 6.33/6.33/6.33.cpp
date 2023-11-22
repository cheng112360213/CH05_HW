#include<stdio.h>
#include<stdlib.h>
#define SIZE 15

int BinSearch(int m[], int key, int *lo, int *hi);

int main()
{
	int val = 0;
	int m[SIZE] = { 6, 13, 14, 25, 33, 43, 51, 53, 64, 72, 84, 93, 95, 96, 97 };
	printf("Input the value : "); 
	scanf("%d", &val);
	printf("Binary search (value / -1) : %d", BinSearch(m, val, &m[0], &m[14]));
}

int BinSearch(int m[], int key, int *lo, int *hi)
{
	for (int i = SIZE / 2; lo != hi; i = i / 2) {
		if (key < *(lo + i)) hi = lo + i - 1;
		else lo = lo + i + 1;
	}
	if (key == *lo) return key;
	else return -1;
}