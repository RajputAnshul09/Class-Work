//eligible for voting

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>=18)
	{
		cout<<"Person is eligible for voting";
	}
	else 
	{
		cout<<"Person is not eligible for voting";
	}
	return 0;	
}
