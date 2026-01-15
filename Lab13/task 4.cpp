#include <iostream>
using namespace std;
int swap(int *ptr1, int *ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	cout<<"After swapping\n"<<*ptr1<<"\n"<<*ptr2<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter 1st num: "<<endl;
	cin>>a;
		cout<<"Enter 2nd num: "<<endl;
	cin>>b;
	int *ptr1=&a;
	int *ptr2=&b;
	swap(ptr1,ptr2);
	
	return 0;
}
