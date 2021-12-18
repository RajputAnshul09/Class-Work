//using for loop

/*

#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
 			count++;
 	}
 	if(count==2)
 	{ 
 		cout<<"Given Number is  prime number: "<<endl;	
	}
	else
	{		 
		cout<<"Given Number is not prime number: "<<endl;
	}
	return 0;	
	
}

*/

//using while loop

#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		if(n%i==0)
			count++;
		i++;	
	}
	 	if(count==2)
 	{ 
 		cout<<"Given Number is  prime number: "<<endl;	
	}
	else
	{		 
		cout<<"Given Number is not prime number: "<<endl;
	}
	return 0;	
	
}

	