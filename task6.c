#include <stdio.h>
#define ROWS 2
#define COLS 3

int main()
{
	int arr[ROWS][COLS];
	int sum = 0;

	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			printf("enter %d row, %d column element\n", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < ROWS; ++i, sum = 0)
	{
		for (int j = 0; j < COLS; ++j)
		{
			sum += arr[i][j];
		}
		printf("%d row, sum = %d\n", i, sum);
	}

	return 0;
}