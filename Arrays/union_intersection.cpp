#include<bits/stdc++.h>
using namespace std;
void union_array(int a1[],int a2[],int m,int n)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(a1[i]<a2[j])
		cout<<a1[i++]<<" ";
		else if(a2[j]<a1[i])
		cout<<a2[j++]<<" ";
		else
		{
			cout<<a2[j++]<<" ";
			i++;
		}
	}
	while(i<m)
	cout<<a1[i++]<<" ";
	while(j<n)
	cout<<a2[j++]<<" ";
	cout<<endl;
}
void intersection(int a1[],int a2[],int m,int n)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(a1[i]<a2[j])
		i++;
		else if(a2[j]<a1[i])
		j++;
		else
		{
			cout<<a2[j]<<" ";
			i++;
			j++;
		}
	}
	cout<<endl;
}
int main()
{
	int a1[]={2,4,6,8};
	int a2[]={1,3,4,5,6};
	int m=sizeof(a1)/(sizeof(a1[0]));
	int n=sizeof(a2)/(sizeof(a2[0]));
	union_array(a1,a2,m,n);
	cout<<endl;
	intersection(a1,a2,m,n);
	return 0;
}


