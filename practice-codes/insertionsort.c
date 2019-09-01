#include <stdio.h>

int main()
{
    int arr[] = {34, 8, 64, 51, 32, 21};
    int i, j;
    for(i = 1; i < 6; i++)
    {
	int tmp = arr[i];
	j = i - 1;
	while(tmp < arr[j] && j >= 0)
	{
	    arr[j + 1] = arr[j];
	    j--;
	}
	arr[j + 1] = tmp;
    }
    for(i = 0; i < 6; i++)
	printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
