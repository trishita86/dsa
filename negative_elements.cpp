#include<bits/stdc++.h>
using namespace std;
void shift(int a[],int n)
{
	int pivot=0,i=-1,j;
	for(j=0;j<n;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
}
	void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
}
int main()
{
	int a[]{-5,4,5,3,-8,-6,-2,6};
	int n=sizeof(a)/(sizeof(a[0]));
	shift(a,n);
	print(a,n);
	return 0;
	return 0;
}	*/


