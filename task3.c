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

	int max_arr = arr[0];
	int max_arr_index = 0;

	for (int i = 1; i < SIZE; ++i)
	{
		if (max_arr < arr[i])
		{
			max_arr = arr[i];
			max_arr_index = i;
		}
	}

	printf("max_arr_index = %d", max_arr_index);

	return 0;
}