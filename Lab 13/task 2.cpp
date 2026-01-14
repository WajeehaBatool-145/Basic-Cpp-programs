#include <iostream>
using namespace std;
int main()
{
	int var=10;
	int *ptr= &var;
	*ptr=20;
	cout<<*ptr;
	
	
	return 0;
}
