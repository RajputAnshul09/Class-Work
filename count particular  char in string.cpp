#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str;
	char c;
	int count=0;
	getline(cin,str);
	cin>>c;
	int len=str.length();
	for(int i=0;i<len;i++)
	{
		if(str[i]==c)
		{
			count++;
		}
	}
	cout<<count;
}
