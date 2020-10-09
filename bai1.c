#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 {
	void printArray(int arr[], int size)
{
    int i;
    printf("Enter elements : ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Inputs elements are: ");
    for(i = 0; i < size; i++)
   	{
		if(i<size-1)
			printf("%d, ", arr[i]);
		else
			printf("%d.", arr[i]);
	}
}
int main1()
{
    int arr[5], c;
    printArray(arr, 5);    // Pass array directly to function printArray
    printf("\nOutputs elements are: ");
	for(c=4;c>=0;c--)
	{
		if(c>0)
			printf("%d, ", arr[c]);
		else
			printf("%d.", arr[c]);
	}
    return 0;
}
	return 0;
}
