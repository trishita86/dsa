#include<bits/stdc++.h>
using namespace std;
void min_max(int a[],int n)
{
	int min,max,i;
		if(n==1)
		{
			min=a[0];
			max=a[0];
		}
		else
		{
			if(a[0]>a[1])
			{
				min=a[1];
				max=a[0];
			}
		else
		{
			max=a[1];
			min=a[0];
		}
	for(i=2;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	if(a[i]<min)
	{
			min=a[i];
		}
	}
}
cout<<"minimum="<<min<<endl;
cout<<"maximum="<<max<<endl;
}
int main()
{
	int a[]={1,6,9,7,8,12,0};
	int n=sizeof(a)/(sizeof(a[0]));
	min_max(a,n);
	return 0;
}





