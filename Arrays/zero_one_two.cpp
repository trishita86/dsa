#include<bits/stdc++.h>
using namespace std;
void sort012(int a[],int n)
{
	int low=0;
	int mid=0;
	int high=n-1;
	while(mid<=high)
	{
		switch(a[mid])
		{
			case 0:
				swap(a[low++],a[mid++]);
				break;
				case 1:
					mid=mid+1;
					break;
					case 2:
						swap(a[mid],a[high--]);
						break;
		}
	}
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<a[i];
}
int main()
{
	int a[]={0,2,1,0,0,2,1,1,2};
	int n=sizeof(a)/(sizeof(a[0]));
	sort012(a,n);
	print(a,n);
	return 0;
}	
