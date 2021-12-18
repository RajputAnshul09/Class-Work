#include<iostream>
using namespace std;
int main()
{
	int n,l,temp;
	cin>>n;
	l=n%10;
	cout<<"Before swap digits"<<endl;
	cout<<endl;
	cout<<"Last digit:-  "<<l<<endl;
	while(n>10)
		n=n/10;	
	cout<<"First digit:- "<<n<<endl;
	temp=n;
	n=l;
	l=temp;
	cout<<endl;
	cout<<"After Swap ditits"<<endl;
	cout<<endl;
	cout<<"First digit:- "<<n<<"\n"<<"Last digit:-  "<<l<<endl;
	
	return 0;
}
