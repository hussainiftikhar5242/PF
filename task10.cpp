#include<iostream>
using namespace std;
main()
{
	int num1;
	cout<<"enter four digits:";
	cin>> num1;
	int a=num1%10;

	int b=num1/10;
	b=b%10;

	int c=num1/100;
	c=c%10;

	int d=num1/1000;
	d=d%10;
	cout<<"The output would be:"<<a<<b<<c<<d;
		

}
	