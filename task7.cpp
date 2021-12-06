#include<iostream>
using namespace std;
main()
{
	float cost,area,size;
	cout<<"the size of the fertilizer bag in pounds";
	cin>> size;
	cout<<"the cost of the bag.";
	cin>> cost;
	cout<<"and the area in square feet that can be covered by the bag";
	cin>>area;
	float total_cost=cost/size;
	cout<<"he cost of the fertilizer per pound:" <<total_cost<<endl;
	float acost=cost/area;
	cout<<"the cost of fertilizing the area per square foot"<<acost;





}