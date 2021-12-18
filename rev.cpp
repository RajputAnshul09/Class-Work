/*

//using for loop

#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,rem;
	cin>>n;
	for(;n>0;n=n/10)
	{
		rem=n%10;
		rev=rev*10+rem;
	}
	cout<<rev;
	return 0;
}

*/

//using while loop

#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,rem;
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	cout<<rev;
}