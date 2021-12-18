#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double P,R,T;
	double A,CI;
	cin>>P>>R>>T;
	A=P*(pow(1+(R/100),T));
	cout<<A<<endl;
	CI=A-P;
	cout<<CI<<endl;
	
}