
/* C++ implementation of QuickSort */
#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;


// A utility function to swap two elements 
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}


/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition(int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than the pivot 
		if (arr[j] < pivot)
		{
			i++; // increment index of smaller element 
			if (i != j) {
				swap(&arr[i], &arr[j]);
				printArray(arr, 20);
			}
		}
	}
	if (i+1 != high) {
		swap(&arr[i + 1], &arr[high]);
		printArray(arr, 20);
	}
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

	//printArray(arr, 20);
}

// Driver Code 
int main()
{
	int arr[] ={4, 78, 13, 45, 2, 90, 66, 34, 21, 32, 10, 7, 5, 102, 56, 11, 19, 23, 75, 88};

	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Given array is \n";
	printArray(arr, 20);

	quickSort(arr, 0, n - 1);

	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}

// This code is contributed by rathbhupendra 
