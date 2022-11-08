#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int n)
{
	int max_sum=0, cur_sum=0;
	for(int i=0;i<n;i++)
	{
		cur_sum=cur_sum+a[i];
		if(cur_sum>max_sum)
		{
			max_sum=cur_sum;
		}
		if(cur_sum<0)
		cur_sum=0;
	}
	return max_sum;
}
int main()
{
	int a[]={-5,-9,-4,-2};
	int n=sizeof(a)/sizeof(a[0]);
	int large=sum(a,n);
	cout<<"maximum sum="<<large<<" ";
	return 0;
}



/*long long maxSubarraySum(int arr[], int n)
{ 
    long max = arr[0];
    long sum = arr[0];
    for( int i = 1 ; i < n ; i++ )
    {
        sum = sum + arr[i];
        if(sum > max)
        {
            max = sum;
        }
        if(sum < arr[i])
        {
            sum = arr[i];
        }
        if( max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
