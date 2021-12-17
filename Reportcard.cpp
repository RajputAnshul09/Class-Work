//Report Card

#include<iostream>
using namespace std;
int main()
{
	int m,p,c;
	float avg;
	cin>>m>>p>>c;
	avg=(m+p+c)/3;
	cout<<avg<<endl;
	if(avg>=90)
	{
		cout<<"Outstanding";
	}
	if(avg>=80 && avg < 90)
	{
		cout<<"very good";
	}
	if(avg>=70 && avg <80)
	{
		cout<<"good";
	}
	if(avg<70)
	{
		cout<<"Fail";
	}
	return 0;
}