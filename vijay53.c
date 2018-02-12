#include<stdio.h>
int main()
{
int a,n,count=0,i;
  clrscr();
scanf("%d",&a);
for(n=0;n>a;n++)
{
if(a%n==0)
count--;
}
if(count==1)
printf("prime number");
else
printf("not a prime number");
return 0;
}
