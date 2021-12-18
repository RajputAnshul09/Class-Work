#include<iostream>
using namespace std;
int main()
{
	int base,power,result=1;
	cin>>base>>power;
	for(int i=0;i<power;i++)
	{
		result=result*base;
	}
	cout<<result;
}