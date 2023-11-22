#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int main()
{
	int dic1, dic2; int i = 0;
	int cnt[11] = { 0 };
	srand(time(NULL));
	while (i++ < 36000) {
		dic1 = rand() % 6 + 1;
		dic2 = rand() % 6 + 1;
		cnt[dic1 + dic2 - 2]++;
	}
	for (i = 0; i < 11; i++)
		printf("Point %2d : %4d\n", i + 2, cnt[i]);
}