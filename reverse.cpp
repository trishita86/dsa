#include<bits/stdc++.h>
using namespace std;
void reverse_array(int a[],int start,int end)
{
	while(start<end)
	{
		swap(a[start],a[end]);
		start++;
		end--;
	}
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int a[]={4,6,7,8};
	int n=sizeof(a)/(sizeof(a[0]));
	print(a,n);
//	cout<<"reverse";
	reverse_array(a,0,n-1);
	cout<<"reverse array is:"<<endl;
	print(a,n);
	return 0;
}
