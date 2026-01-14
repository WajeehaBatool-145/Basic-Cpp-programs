#include <iostream>
using namespace std;
int main()
{
	int var=10;
	int *ptr = &var;
	//address
	cout<<ptr<<endl;
	//value at address
	cout<<*ptr;
	
	
	return 0;
}
