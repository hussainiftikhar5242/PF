#include<iostream>
using namespace std;
main()
{ 
	string student_name;
	int marks1,marks2,marks3,marks4,marks5;
	cout<<"enter student name:";
	cin>> student_name;
	
	cout<<"enter 1st subject marsk out of 100:";
	cin>> marks1;
	cout<<"enter 2nd subject marks out of 100:";
	cin>> marks2;
	cout<<"enter 3rd subject marks out of 100:";
	cin>> marks3;
	cout<<"enter 4th subject marks out of 100:";
	cin>> marks4;
	cout<<"enter 5th subject marks out of 100:";
	cin>> marks5;
	float sum=marks1+marks2+marks3+marks4+marks5;
	cout<<"total marks in 5 subjects:"<< sum <<endl;
	float percentage=sum*100/500;
	cout<<"student name"<< student_name<<endl<< "obtained percentage :"<< percentage;
	
	
	
}