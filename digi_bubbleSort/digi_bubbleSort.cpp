#include "stdafx.h"
#include <stdio.h>
#include <iostream>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n; i++)

		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

// Function to print an array
void printArray(int arr[], int size)
{
	std::cout << "*** Bubble Sort ***" << std::endl;
	std::cout << "Unsorted {64, 34, 25, 12, 22, 11, 90}" << std::endl;

	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	std::cout << " Number of Elements = " << size << std::endl;
}

//Driver to test above function 
int runBubbleSort()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
