//  input is vowel or consonant. 

#include<iostream>
using namespace std;
int main()
{
	char a;
	cin>>a;
	if(a== 'A' || a=='E' || a=='I' || a=='O' || a=='U')
	{
		cout<<a<<" Is Vowel "<<endl;
	}
    	else if(a== 'a' || a=='e' || a=='i' || a=='o' || a=='u')
	{
		cout<<a<<" Is Vowel "<<endl;
	}
	else
	{
		cout<<a<<" Is Consonant "<<endl;
	}
	return 0;
}