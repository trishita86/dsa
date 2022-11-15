#include<bits/stdc++.h>
using namespace std;
void rotate(int a[],int n)
{
	int last=a[n-1];
	int i;
	for(i=n-1;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=last;
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<a[i];
}
int main()
{
	int a[]{5,4,3,2,7,6};
	int n=sizeof(a)/(sizeof(a[0]));
	rotate(a,n);
	print(a,n);
	return 0;
}	
	
