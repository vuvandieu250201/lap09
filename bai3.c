#include <stdio.h>
int min(int num[], int size);
main2()
{
	int c, num[10];
	for(c=0;c<10;c++)
	{
		printf("\nEnter num%d : ",c+1);
		scanf("%d",&num[c]);
	}
	min(num,10);
	printf("\nMin value in index%d", min(num,10));
}
int min(int num[], int size)
{
	int i, m, index;
	for(i=0;i<size;i++)
	{
		if(i==0)
			m = num[i];
		else if(m>num[i])
		{
			m = num[i];
			index = i;
		}
	}
	return(index);
}
