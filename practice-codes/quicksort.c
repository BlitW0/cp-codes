#include <stdio.h>

void swap(int* a, int* b)
{
    *a = *a + *b - (*b = *a);
}

int partition(int arr[], int lo, int hi)
{
    int i, p = lo, pivot = arr[hi]; // assuming pivot as last element
    for(i = lo; i < hi; i++) 
    {
	if(arr[i] <= pivot) // place smaller element before pos. of pivot
	{
	    swap(arr + i, arr + p); // smaller element comes in pos. of pivot
	    p++; // pos. of pivot shifts to accomodate smaller element
	}
    }
    // printf("pivot: %d, lo: %d, hi: %d\n", pivot, lo, hi);
    swap(arr + p, arr + hi); // putting pivot on its pos. , i.e. , p
    /*for(i = 0; i < 7; i++)
	printf("%d ", arr[i]);
    printf("\n");*/
    return p; // return index of pivot
}

void quicksort(int arr[], int lo, int hi)
{
    if(lo < hi) // validating subarray
    {
	int p = partition(arr, lo, hi); // getting index of the pivot
	quicksort(arr, lo, p - 1); // sorting the left half by partitioning
	quicksort(arr, p + 1, hi); // sorting the right half by partitioning
    }
}

int main()
{
    int i, arr[] = {4, 2, 1, 3, 7, 8, -1};
    quicksort(arr, 0, 6);
    for(i = 0; i < 7; i++)
	printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
