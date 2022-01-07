#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,missing_num,i;
	cin>>n;
	int arr[n-1];
	for(int i=0;i<n-1;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	missing_num=((n*(n+1))/2)-sum;
	cout<<"Missing number is:= "<<missing_num;
	return 0;	
}
