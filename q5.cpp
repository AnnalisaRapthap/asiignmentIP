//assignment q5
#include<iostream>
using namespace std;
int power(int a, int b)
{
	int i,res=1;
	for(i=1;i<=3;i++)
	{
		res=res*a;
	}
	return res;
}
int factorial(int a)
{
	int i,f=1;
	for(i=a;i>0;i--)
	{
	 f=f*i;
	}
	return f;
}
int main()
{
	int x, n;
	float sinx=0;
	int i;
	cout << "Enter the value of x:";
	cin >> x;
	cout << "\nEnter the value of n: ";
	cin >> n;
	for(i=1;i<=n;i+=2)
	{
		int c=1;
		if(c%2!=0)
		sinx=sinx+(power(x,i)/factorial(i));
		else if(c%2==0)
		sinx=sinx-(power(x,i)/factorial(i));
	}
	cout << "\n sin" << x << "=" << sinx;
}
