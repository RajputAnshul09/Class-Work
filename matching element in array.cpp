#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0,i,j,k;
	cin>>n;
	int arr[n];
	for( k=0;k<n;k++)
	{
		cin>>arr[k];
	}
	for( i=0;i<n;i++)
	{
		for( j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}

		}
	}
	if(count>0)
	{
		cout<<count<<" numbers are matching"<<endl;
	}
	else
	{
		cout<<"elements are not matched";
	}

}

