main4()
{
	int i, a, size, num[size], snt[size], count=0;
	
	printf("\nNhap vao size : ");
	scanf("%d", &size);
	
	for(a=0;a<size;a++)
	{
		snt[a]=0;
		printf("\nNhap so%d : ",a+1);
		scanf("%d", &num[a]);
	}
	for(a=0;a<size;a++)
	{
		if(num>2)
		{
			for(i=2;i<num[a];i++)
			{
				if(num[a]%i==0)
				{
					count++;
				}
			}
		}
		if(count==0)
			snt[a]=num[a];
	}
	printf("\nSo nguyen to trong mang la : ");
	for(a=0;a<size;a++)
	{
		if(snt[a]!=0)
			printf("%d ",snt[a]);
	}
}

