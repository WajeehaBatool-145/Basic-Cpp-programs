#include <iostream>
using namespace std;
int main()
{
	int choice;
	float r,area;
	float l,w;
	float h,b;
	cout<<"Enter number to corresponding choice: "<<endl;
	cout<<"1. Circle"<<endl;
	cout<<"2. Rectangle"<<endl;
	cout<<"3. Triangle"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter radius: ";
			cin>>r;
			area=3.14*r*r;
			cout<<"Area of circle is "<<area;
			break;
		case 2:
			cout<<"Enter length: ";
			cin>>l;
			cout<<"Enter width: ";
			cin>>w;
			area=l*w;
			cout<<"Area of rectangle is "<<area;
			break;
		case 3:
			cout<<"Enter base: ";
			cin>>b;
			cout<<"Enter height ";
			cin>>h;
			area=0.5*b*h;
			cout<<"Area of triangle is "<<area;
			break;
		default:
			cout<<"Wrong choice";
			break;
	}
	return 0;
}
