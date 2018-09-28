//assignment question4
#include<iostream>
using namespace std;
int main()
{
	int n, num, cp=0, cn=0, cz=0;
	cout << "Enter the number of times:";
	cin >> n;
	int i=1;
	cout << "Enter the numbers:" << endl;
	while(i<=n)
	{
		cin >> num;
		if(num>0)
		cp++;
		else if(num<0)
		
		cn++;
		else
		cz++;
		i++;
	}
	cout << "\nThe number of Positive numbers=" << cp;
    cout << "\nThe number of Negative numbers=" << cn;
	cout << "\nThe number of Zeroes=" << cz;

}
