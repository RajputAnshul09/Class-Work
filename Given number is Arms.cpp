#include<iostream>
using namespace std;
int main()
{
	int n=379;
	int sum=0,rem,i,temp;
	temp=n;
	while(i<n)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}	
	cout<<sum<<endl;
	if(sum==temp)
		cout<<"Given number is Armstrong number"<<endl;
	else
		cout<<"Given number is not Armstrong number"<<endl;
		
	return 0;
	
}