//  input is alphabet or not 

#include<iostream>
using namespace std;
int main()
{
	char a;
	
	cin>>a;
	if(a>='a' && a<='z' || a>='A' && a<='Z' )
	{
		cout<<a<<" Is alphabet "<<endl;
	}
    else
	{
		cout<<a<<" Is not alphabet "<<endl;
	}
	return 0;
}