#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int flag=0;
	getline(cin,str);
	int len=str.length();
	for(int i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<str<<" is palindrome"<<endl;
	}
	else
	{
		cout<<str<<" is not palindrome"<<endl;
	}
	return 0;
}
