#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,rem,temp;
	cin>>n;
	temp=n;
	for(;n>0;n=n/10)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
	}
	if(temp==sum)
		cout<<"Given number is Armstrong number"<<endl;
	else
		cout<<"Given number is not Armstrong number"<<endl;
		
	return 0;
	
}