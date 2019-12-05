#include<stdio.h>
int bins(int ar[],int r,int x)
{n
	if (x>=1)
	{
		int mid=r/2;
		
		if(ar[mid]==x)
			return mid;
		
		if(ar[mid]>x)
			return bins(ar,r,x);
			
		if(ar[mid]<x)
			return bins(ar,r,x);
	}
	return 0;
	
}
