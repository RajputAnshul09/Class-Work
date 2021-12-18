#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,rem;
	cin>>n;
	for(int i=n;i>0;i=i/10)
	{
		rem=i%10;
		rev=rev*10+rem;
		
	}
	cout<<rev<<endl;
	if(rev==n)
	{
		cout<<"Given number is palindrom number";
	}
	else 
	{
		cout<<"Given number is not palindrom number";
	}
	return 0;
}