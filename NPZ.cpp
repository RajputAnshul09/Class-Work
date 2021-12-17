//  numbers is  negative, positive or zero

#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	if(num>0)
	{
		cout<<num<<" Is positive "<<endl;
	}
	else if(num<0)
	{
			cout<<num<<" Is negative "<<endl;
	}
	else
	{
		cout<<num<<" Is Zero "<<endl;
	}
	return 0;
}