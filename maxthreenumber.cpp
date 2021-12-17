// find maximum between three numbers

#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cin>>num1>>num2>>num3;
	if(num1>num2 && num1>num3)
	{
			cout<<"first number is greater than other number And number Is "<<num1<<endl;
	}
	else if(num2>num1 && num2>num3)
	{
		
			cout<<"second number Is greater than other number And number is "<<num2<<endl;
	}
	else 
	{
	
			cout<<"third number Is greater than other number And number is "<<num3<<endl;
		
	}
	return 0;
}