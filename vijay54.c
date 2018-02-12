#include<stdio.h>
void main()
{
	int a,b,i;
	printf("ENTER THE RANGE:\n");
	scanf("%d%d",&a,&b);
	printf("TO PRINT THE ODD NO'S BETWEEN THE RANGE:\n");
	for(i=a;i<b;i++)
	{
		if((i%2)!=0)
		{
			printf("%d\n",i);
		}
	}
}
