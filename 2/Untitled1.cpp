#include <stdio.h>

int main()
{
	int a,b,c,d=0;
	
	scanf("%d", &a);
	
	for(a;a>0;a--)
	{
		for(c=d;c>0;c--){printf(" ");}
		d++;
		for(b=a*2-1;b>0;b--){printf("*");}
		printf("\n");
		
	}
}
