using namespace std;
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot
	int i = (low - 1); // Index of smaller element

	for (int j = low; j <= high- 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (arr[j] <= pivot)
		{
			i++; // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d \t", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{
	int n=1000;
	int arr[]={4,232,42,42,4231,412,421,432,425,436,465};
	
	n = sizeof(arr)/sizeof(arr[0]);
	clock_t sTime = clock();
	
	printf("Sebelum : \n");
	printArray(arr, n);
	
	quickSort(arr, 0, n-1);
	printf("\nSesudah: \n");
	printArray(arr, n);
	printf("\nTime Taken %.2fs\n", (double)(clock()-sTime)/CLOCKS_PER_SEC);
	
	system("pause");
}
