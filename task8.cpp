#include<iostream>
using namespace std;
main()
{ 
	string moviename;
	int aprice,cprice,aticket,cticket;
	float charity;
	cout<<"enter movie name:";
	cin>> moviename;
	cout<<"adult ticket price:";
	cin>> aprice;
	cout<<"child ticket price:";
	cin>> cprice;
	cout<<"number of adult ticket sold:";
	cin>> aticket;
	cout<<"Number of child tickets sold:";
	cin>> cticket;
	cout<<"Percentage of the amount to be donated to the charity:";
	cin>> charity;
	aprice=aticket*aprice;
	cout<<"adult total ticket price:"<<aprice<<endl;
	cprice= cprice*cticket;
	cout<<"adult total ticket price:"<<cprice<<endl;
	float totalprice=aprice+cprice;
	cout<<"total amount genertaed by the sold ticket:"<<totalprice;
	float donation=totalprice * (charity/100);
	cout<<"total charity:"<< donation;
	
	
}	
	

	