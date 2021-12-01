#include<iostream>
using namespace std;
int main()
{
	float distance ;
	float time;
	cout<<"enter distance in KM:";
	cin>> distance;
	cout<<"enter time in hours:";
	cin>>time;
	float speed;
	speed=distance/time;
	cout<<"speed is "<< speed;
}
	