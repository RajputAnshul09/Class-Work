#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	int n=0,n1=0;
	getline(cin,str1);
	getline(cin,str2);
	int l1=str1.length();
	int l2=str2.length();
	if(l1==l2)
	{
		for(int i=0;i<l1;i++)
		{
			n=0;
			for(int j=0;j<l1;j++)
			{
				if(str1[i]==str2[j])
				{
					n=1;
					break;
				}
			}
			if(n==0)
			{
				n1=1;
				break;
			}
		}
		if(n1==1)
			cout<<"given strings are not anagram"<<endl;
		else
			cout<<"given strings are anagram"<<endl;	
	}
	else
		cout<<"both string char size are different it means it's not anagram "<<endl;
	return 0;
}
