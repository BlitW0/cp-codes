#include "bits/stdc++.h"
using namespace std;

void swap(int *a, int *b)
{
    *a = *a + *b - (*b = *a);
}

void insert(int a[], int size)
{
    int i = size - 1;
    while(i >= 1) {
	if(a[i/2] < a[i]) {
	    swap(a[i/2], a[i]);
	    i /= 2;
	}
	else break;
    }
}

void max_heapify(int a[], int i, int size)
{
    int largest = i;
    if(a[2*i + 1] > a[largest] && 2*i + 1 < size)
	largest = 2*i + 1;
    if(a[2*i + 2] > a[largest] && 2*i + 2 < size)
	largest = 2*i + 2;
    if(largest != i)
    {
	swap(a[i], a[largest]);
	max_heapify(a, largest, size);
    }
}

void min_heapify(int a[], int i, int size)
{
    int smallest = i;
    if(a[2*i + 1] < a[smallest] && 2*i + 1 < size)
	smallest = 2*i + 1;
    if(a[2*i + 2] < a[smallest] && 2*i + 2 < size)
	smallest = 2*i + 2;
    if(smallest != i)
    {
	swap(a[i], a[smallest]);
	min_heapify(a, smallest, size);
    }
}

void buildmaxheap(int a[], int size)
{
    for(int i = size/2; i >= 0; i--)
	max_heapify(a, i, size);
}

void buildminheap(int a[], int size)
{
    for(int i = size/2; i >= 0; i--)
	min_heapify(a, i, size);
}

void del(int a[], int size)
{
    a[0] = a[size];
    buildminheap(a, size);
}

int main()
{
    int n; cin >> n;
    int a[n], size = 0;
    for(int i = 0; i < n; i++) {
	cin >> a[i];
	buildminheap(a, ++size);
    }

    //heapsort
    for(int i = 0; i < n; i++) {
	cout << a[0] << " ";
	del(a, --size);
    }
    cout << endl;
    return 0;
}
