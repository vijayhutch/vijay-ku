
#include <stdio.h>
#include<conio.h>


	void division(int a[],int start,int end);
	void merge(int a[],int start,int mid,int end);
	int main(void)
	{
		int a[50];
		int n,i;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		division(a,0,n-1);
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
	}
	void division(int a[],int start,int end)
	{
		int mid;
		
		if(start<end)
		{
			mid=(strt+end)/2;
			division(a,start,mid);
			division(a,mid+1,end);
			merge(a,start,mid,end);
			
		}
	}
	void merge(int a[],int start,int mid,int end)
	{
		int i, mi, k, s, temp[50];
		s = start;
		i = start;
		mi = mid + 1;
		while ((s<= mid) && (mi <= end))
		{
			if (a[s] <= a[mi])
			{
          			temp[i] = a[s];
          			s++;
			}
			else
			{
          			 temp[i] = a[mi];
          			 mi++;
			}
		i++;
		}
		if (s > mid)
		{
			for (k = mi; k <= end; k++)
			{
          			temp[i] = a[k];
          			i++;
			}
		}
		else
		{
			for (k = s; k <= mid; k++)
			{
          			temp[i] = a[k];
          			i++;
			}
		}
 
		for (k = start; k <= end; k++)
		{
			a[k] = temp[k];
		}
		
	}
