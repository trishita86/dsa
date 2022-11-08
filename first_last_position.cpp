#include<bits/stdc++.h>
int firts(int a[],int n,int k,int low,int high)
{
	low=0, high=n-1; int first=-1,result;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==k)
		{	first=mid;
			int result=mid-1;
		}
		else if(a[mid]<k)
		low=mid+1;
		else
		high=mid-1;
	}
			return result;
}
int last(int a[],int n,int k,int low,int high)
{
	 low=0,high=n-1; int last=-1,result;
	while(low<=high)
	{
	int mid=(low+high)/2;
		if(a[mid]==k)
		{	last=mid;
			int result=mid+1;
		}
		else if(a[mid]<k)
		low=mid+1;
		else
		high=mid-1;
	}
	return result;
}
int main()
{
	int a[]={2,4,4,4,3,8};
	int n=sizeof(a)/sizeof(a[0]);
	int k=4;
	int low=0,high=n-1;
	int f=first(a,n,k,low,high);
	int l=last(a,n,k,low,high);
	cout<<"first element="<<f<<" ";
	cout<<"last element="<<l<<" ";
	return 0;
}
	
