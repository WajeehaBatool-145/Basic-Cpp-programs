#include <iostream>
using namespace std;
int main()
{
	int choice,c,item_price,quantity,total_amount;
	int flag;
	int discount, final_amount;
	cout<<"Choose the cateogary:\n";
	cout<<"1. Electronics"<<endl;
	cout<<"2. Clothing"<<endl;
	cout<<"3. Groceries"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
		
			cout<<"Choose the item:\n";
			cout<<"1. Laptop"<<endl;
			cout<<"2. Smartphone"<<endl;
			cout<<"3. Headphones"<<endl;
			cin>>c;
			switch(c)
			{
				case 1:
					{
					item_price=1000;
					cout<<"Price of laptop: "<<item_price<<endl;
					cout<<"Enter quantity: "<<endl;
					cin>>quantity;
					 flag=1;
					break;
					
					}
				case 2:
					{
					item_price=700;
					cout<<"Price of Smartphone: "<<item_price<<endl;
					cout<<"Enter quantity: "<<endl;
					cin>>quantity;
					 flag=1;
					break;
					}
				case 3:
					{
					item_price=150;
					cout<<"Price of Headphones: "<<item_price<<endl;
					cout<<"Enter quantity: "<<endl;
					cin>>quantity;
					flag=1;
					break;
					}
				default:
					cout<<"invalid choice"<<endl;
					flag=0;
					break;
			}
			break;
		case 2:
			cout<<"Choose the item:\n";
			cout<<"1. Jacket"<<endl;
			cout<<"2. T-shirt"<<endl;
			cout<<"3. Jeans"<<endl;
			cin>>c;
			switch(c)
			{
				case 1:
					{
					item_price=120;
					cout<<"Price of Jacket: "<<item_price<<endl;
					cout<<"Enter quantity: "<<endl;
					cin>>quantity;
					flag=1;
					break;
					}
				case 2:
					{
					item_price=40;
					cout<<"Price of T-shirt: "<<item_price<<endl;
					cout<<"Enter quantity: "<<endl;
					cin>>quantity;
					flag=1;
					break;
					}
				case 3:
					{
					item_price=60;
					cout<<"Price of Jeans: "<<item_price<<endl;
					cout<<"Enter quantity: "<<endl;
					cin>>quantity;
					flag=1;
					break;
					}
				default:
					cout<<"invalid choice"<<endl;
					flag=0;
					break;
			}
			break;
		case 3:
			{
			cout<<"Choose the item:\n";
			cout<<"1. Milk"<<endl;
			cout<<"2. Bread"<<endl;
			cout<<"3. Eggs"<<endl;
			cin>>c;
			switch(c)
			{
				case 1:
					{
					item_price=2;
					cout<<"Price of 1 liter Milk: "<<item_price<<endl;
					cout<<"Enter quantity in liters: "<<endl;
					cin>>quantity;
					flag=1;
					break;
					}
				case 2:
					{
					item_price=3;
					cout<<"Price of Bread loaf: "<<item_price<<endl;
					cout<<"Enter quantity: "<<endl;
					cin>>quantity;
					flag=1;
					break;
					}
				case 3:
					{
					item_price=5;
					cout<<"Price of 1 dozen eggs: "<<item_price<<endl;
					cout<<"Enter quantity: "<<endl;
					cin>>quantity;
					flag=1;
					break;
					}
				default:
					cout<<"invalid choice"<<endl;
					flag=0;
					break;
			}
				break;
					
			}
		default:
		cout<<"Wrong choice"<<endl;
	   flag=0;
	   break;
				
	}
	if (flag==1)
	{
	
	cout<<"------------Invoice-----------"<<endl;
	total_amount=item_price*quantity;
	cout<<"total amount: "<<total_amount<<endl;
	if(total_amount<100)
	{
		cout<<"No discout. Your total amount is: "<<total_amount<<endl;
	}
	else if(total_amount>100 && total_amount<500)
	{
		cout<<"You've got 10% discount."<<endl;
		discount=total_amount*0.10;
		final_amount=total_amount-discount;
		cout<<"Your  total amount now: "<<final_amount<<endl;
	}
	else if(total_amount>=500)
	{
		cout<<"You've got 20% discount."<<endl;
		discount=total_amount*0.20;
		final_amount=total_amount-discount;
		cout<<"Your  total amount now: "<<final_amount<<endl;
	}
}
else
{
	cout<<"You made wrong choice";
}
	
	return 0;
}
