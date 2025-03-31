#include <stdio.h>
#define ROWS_COLS 3 // ROWS == COLS

int main()
{
	int arr[ROWS_COLS][ROWS_COLS];
	int sum = 0;

	for (int i = 0; i < ROWS_COLS; ++i)
	{
		for (int j = 0; j < ROWS_COLS; ++j)
		{
			printf("enter %d row, %d column element\n", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < ROWS_COLS; ++i)
	{
		sum += arr[i][i];
	}

	printf("sum = %d\n", sum);

	return 0;
}