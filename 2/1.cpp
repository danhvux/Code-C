#include<stdio.h>

int main ()
{
	int n,a,b,c,d;
	printf("Nhap so n:");
	scanf("%d",&n);

	for (a=n;a>=1;a--)
	{
		for(c=0;c<(n-a);c++)
		{
			printf(" ");
		}
		for(b=(a*2)-1;b>=1;b--)
		{
			printf("*");
		}
		printf("\n");
	}
}
