#include<iostream>
using namespace std;
int main()
{
	int fact=1,n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	cout<<fact<<endl;
	return 0;
}