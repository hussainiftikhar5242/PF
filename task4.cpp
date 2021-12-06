#include<iostream>
using namespace std;
main()
{
	float accelration,time,initial_velocity;
	cout<<"enter accelration";
	cin>> accelration;
	cout<<"enter time";
	cin>> time;
	cout<<"enter initial_velocity:";
	cin>> initial_velocity;
	float final_velocity;
	final_velocity=(accelration*time)-initial_velocity;
	cout<<"final velocity"<<final_velocity;
}