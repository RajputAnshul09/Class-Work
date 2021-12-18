#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			cout<<i<<endl;;
			sum=sum+i;	
		}
			
	}
	cout<<" sum of odd number is:- "<<sum;
	return 0;	
}