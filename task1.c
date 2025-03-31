#include <stdio.h>
#define SIZE 5

int main()
{
	int arr[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{	
		printf("enter %d element\n", i);
		scanf("%d", &arr[i]);
	}

	int max_arr = arr[0];

	for (int i = 1; i < SIZE; ++i)
	{
		if (max_arr < arr[i])
		{
			max_arr = arr[i];
		}
	}

	printf("max_arr = %d", max_arr);

	return 0;
}