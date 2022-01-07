#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str;
	int count=0;
	getline(cin,str);
	int len=str.length();
	for(int i=0;i<len;i++)
	{
		if(str[i]>='0' & str[i]<='9')
		{
			count++;
		}
	}
	if(count>0)
	{
		cout<<"number of numerical digit:= "<<count;
	}
	else
	{
		cout<<"Numerical digit is not prasent";
	}
}
