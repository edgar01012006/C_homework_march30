#include <stdio.h>
#define SIZE 5

int main()
{
	int arr[SIZE] = {0};

	for (int i = 0; i < SIZE; ++i)
	{
		printf("enter %d element\n", i);
		scanf("%d", &arr[i]);
	}

	int min_arr = arr[0];

	for (int i = 1; i < SIZE; ++i)
	{
		if (min_arr > arr[i])
		{
			min_arr = arr[i];
		}
	}

	printf("min_arr = %d\n", min_arr);

	return 0;
}