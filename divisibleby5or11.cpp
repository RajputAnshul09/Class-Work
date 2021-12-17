//  numbers is  divisible by 5 and 11 or not

#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	if(num%5==0 && num%11==0)
	{
		cout<<num<<" Is divisible by 5 and 11 "<<endl;
	}
	else
	{
		cout<<num<<" Is not divisible by 5 and 11 "<<endl;
	}
	return 0;
}