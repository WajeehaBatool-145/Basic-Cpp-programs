#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
age<13?cout<<"Age "<<age<<" falls under the cateogary: child":(age<=19?cout<<"Age "<<age<<
" falls under the cateogary: teenager":cout<<"Age "<<age<<" falls under the cateogary: adult");
	return 0;
}
