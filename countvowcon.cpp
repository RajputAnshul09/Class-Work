#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int Vcount=0,Ccount=0;
	getline(cin,str);
	int len=str.length();
	for(int i=0;i<=len;i++)
	{
		if(str[i]=='A'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='E'||str[i]=='a'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='e')
		{
			Vcount++;
		}
		else if((str[i]>='a' && str[i]<='z'||str[i]>='A' && str[i]<='Z'))
		{
			Ccount++;
		}
	}
	cout<<"vowel="<<Vcount<<endl;
	cout<<"consonant="<<Ccount<<endl;
}

