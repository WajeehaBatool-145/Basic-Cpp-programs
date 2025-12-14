#include <iostream>
using namespace std;
int main()
{
	int n,i=1,limit;
	cout<<"Enter number for multiplication table: ";
	cin>>n;
	cout<<"Enter limit: ";
	cin>>limit;
	while(i<=limit)
	{
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
		i++;
	}
		
	
	
	return 0;
}
