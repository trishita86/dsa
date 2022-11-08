#include<bits/stdc++.h>
using namespace std;
int dupli(int a[],int n)
{
	int i;
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		return a[i];
	}
}
int main()
{
	int a[]={4,5,2,2,9,8};
	int n=sizeof(a)/sizeof(a[0]);
	int p=dupli(a,n);
	cout<<"duplicate="<<p<<endl;
	return 9;
}
