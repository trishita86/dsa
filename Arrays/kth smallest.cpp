#include<bits/stdc++.h>
using namespace std;
int smallest(int a[],int n,int k)
{
	sort(a,a+n);
	return a[k-1];
}
int main()
{
	int a[]={6,9,8,4,5};
	int n=sizeof(a)/(sizeof(a[0]));
	int k=4;
	int p=smallest(a,n,k);
	cout<<"fourth smallest element:"<<p<<endl;
	return 0;
}
