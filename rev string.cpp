#include<iostream>
#include<string>
using namespace std;
int main()
{
	int len;
	string str;
	cin>>str;
	len=str.length();
	for(int i=len-1;i>=0;i--)
		cout<<str[i];	
}
