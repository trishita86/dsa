#include<bits/stdc++.h>
using namespace std;
int get_pairs(int arr[],int n,int sum)
{
	int i=0,j=n-1,k=0,ans=0;
	while(i<j)
	{
		k=arr[i]+arr[j];
		if(k==sum)
		{
			ans++;
			i++;
			j--;
		}
		else if(k>sum)
		j--;
		else
		i++;
	}
	if(ans==0)
	return -1;
	return ans;
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=5;
	int count=get_pairs(arr,n,sum);
	cout<<"frequency="<<count<<endl;
	return 0;
}
