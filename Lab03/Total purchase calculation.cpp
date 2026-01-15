#include <iostream>
using namespace std;
int main()
{
	//Price of items
	float item_1_price=12.95;
	float item_2_price=24.95;
	float item_3_price=6.95;
	float item_4_price=14.95;
	float item_5_price=3.95;
	float subtotal;
	const float sales_tax_rate =(6.0/100);
	float sales_tax;
	
cout<<"Price of item 1: $"<<item_1_price<<endl;	
cout<<"Price of item 2: $"<<item_2_price<<endl;
cout<<"Price of item 3: $"<<item_3_price<<endl;
cout<<"Price of item 4: $"<<item_4_price<<endl;
cout<<"Price of item 5: $"<<item_5_price<<endl;	

//	calculating subtotal
subtotal=item_1_price+item_2_price+item_3_price+item_4_price+item_5_price;
	cout<<"Subtotal: $"<<subtotal<<endl;

//sales tax 6% of subtotal
	sales_tax=sales_tax_rate*subtotal;	
	cout<<"sales tax (6%): $"<<sales_tax<<endl;
	
//total amount
 cout<<"Total: $"<<subtotal+sales_tax; 
	return 0;
}
