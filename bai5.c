#include <stdio.h>

void upper_case(char str[]);
main6()
{
	char s[30];
	printf("\nEnter string : ");
	gets(s);
//	scanf("%s", s);
	
	upper_case(s);
	printf("\n %s", s);
}

void upper_case(char str[])
{
	int x;
	for(x=0;str[x] != '\0';x++)
	{
		if(str[x]>=97 && str[x]<=122)
			str[x]-=32;
	}
}
