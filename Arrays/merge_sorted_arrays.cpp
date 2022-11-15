#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int b[],int n,int m)
{
	int i=n-1,j=0;
	while(i>=0 && j<m)
	{
		if(a[i]>=b[j])
		{
			swap(a[i],b[j]);
			i--, j++;
		}
		else
		{
			break;
		}
		sort(a,a+n);
		sort(b,b+m);
	}
}
	int main()
	  {
		int a[]={4,5,6,8,3};
		int b[]={4,2,1,9,5};
		int n=sizeof(a)/sizeof(a[0]);
		int m=sizeof(a)/sizeof(a[0]);
		merge(a,b,n,m);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<endl;
		}
		for(int j=0;j<m;j++)
		{
			cout<<b[j]<<endl;
		}
	return 0;
	}

		
