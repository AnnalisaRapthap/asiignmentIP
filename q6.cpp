//assignment question6
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i;
	cout << "Enter the two numbers: ";
	cin >> a;
	cin >> b;
	cout << "\nThe Prime numbers between " << a << " and " << b << " are: ";
	while(a<=b)
	{
		c=0;
		for(i=1;i<a;i++)
		{
			if(a%i==0)
			c++;
		}
		if(c==1)
		{
		cout << a << "\t";
		}
		a++;
	}
}
