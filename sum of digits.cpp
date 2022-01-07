#include<iostream>
using namespace std;
int main()
{
	int i, p=0;
	cin>>i;
	for(;i>0;i=i/10)
		p=p+(i%10);
	cout<<p;
	return 0;
}
