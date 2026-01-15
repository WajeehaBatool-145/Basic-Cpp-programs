#include <iostream>
using namespace std;
int main()
{
	int *ptr=0;
	if(ptr==0)
	{
		cout<<"The pointer is null and does not point to any valid memory.";
	}
	else
	{
		cout<<"The pointer points to memory address:"<<&ptr;
	}
	
	
	return 0;
}
