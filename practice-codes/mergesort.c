#include <stdio.h>

void merge(int arr[], int n, int l[], int lsize, int r[], int rsize)
{
    int i, j, k; i = j = k = 0;
    while(i < lsize && j < rsize)
    {
	if(l[i] < r[j]) arr[k++] = l[i++];
	else arr[k++] = r[j++];
    }
    while(i < lsize) arr[k++] = l[i++];
    while(j < rsize) arr[k++] = r[j++];
}

void mergesort(int arr[], int n)
{
    if(n < 2) return;
    int i, mid = n/2; int l[mid], r[n - mid];
    for(i = 0; i < mid; i++) l[i] = arr[i];
    for(i = mid; i < n; i++) r[i - mid] = arr[i];
    mergesort(l, mid);
    mergesort(r, n - mid);
    merge(arr, n, l, mid, r, n - mid);
}


int main()
{
    int n; printf("Enter number of elements: ");
    scanf("%d", &n); 
    printf("Enter the elements: "); int i, arr[n];
    for(i = 0; i < n; i++)
	scanf("%d", arr + i);
    mergesort(arr, n);
    for(i = 0; i < n; i++)
	printf("%d ", arr[i]);
    printf("\n");
}
