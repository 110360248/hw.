#include<stdio.h>
#include <stdlib.h>

int main() {
	int j, i, a[10] = { 13,34,22,221,53,89,5,6,2,55 };
	printf("­ì¶¶§Ç");
	for (i = 0; i < 10; i++) printf("%d\t", a[i]);
	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (a[i] > a[j])
			{
				int x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
	printf("\n±Æ§Ç«á");
	for (i = 0; i < 10; i++) printf("%d\t", a[i]);
}