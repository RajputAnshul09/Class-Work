#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		cout<<"Char is alphabet"<<endl;
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<"Char is digits";
	}
	else
	{
		cout<<"char is special";
	}
	return 0;
}