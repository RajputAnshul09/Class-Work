//  input is uppercase or lowercase alphabet 

#include<iostream>
using namespace std;
int main()
{
	char a;
	
	cin>>a;
	if(a>=65 && a<=90)  
	{
		cout<<a<<" Is uppercase alphabet "<<endl;
	}
    else if(a>=97 && a<=122 )
	{
		cout<<a<<" Is lowercase alphabet "<<endl;
	}
	else 
	{
		cout<<"Please put Alphabet value ";
	}
	return 0;
}