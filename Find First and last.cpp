#include<iostream>
using namespace std;
int main()
{
	int n,l;
	cin>>n;
	l=n%10;
	cout<<"Last digit:-  "<<l<<endl;
	while(n>10)
		n=n/10;	
	cout<<"First digit:- "<<n<<endl;
	return 0;
}
