#include <iostream>
using namespace std;
int main()
{
int choice; 
int bill=0;
		int flag=1;
cout<<"Breakfast\nLunch\nDinner"<<endl;
cout<<"Enter number to corresponding choice: ";
cin>>choice;
switch(choice)
{
	case 1:
		//Breakfast
		
		do
		{
		int choice1,amount;
		
		cout<<"Today's menu for breakfast is:\n";
		cout<<"1.Anda Pratha (Rs. 40)\n2.Naan Channy (Rs. 60)\n3.Siri paye (Rs. 150)\n4.Tea (Rs. 15)\n5.For exit"<<endl;
		cout<<"Enter number to corresponding choice: ";
		cin>>choice1;
		switch(choice1)
		{
			case 1:
				{
				
				cout<<"Enter amount of anda pratha i.e 1,2 etc\n";
				cin>>amount;
				bill+=amount*40;
				break;
			}
			break;
			case 2:
				
				cout<<"Enter amount of Naan channy i.e 1,2 etc\n";
				cin>>amount;
				bill+=amount*60;
				break;
			case 3:
				
				cout<<"Enter amount of Sirri paaye i.e 1,2 etc\n";
				cin>>amount;
				bill+=amount*150;
				break;
			case 4:
				cout<<"Enter amount of tea cups i.e 1,2 etc\n";
				cin>>amount;
				bill+=amount*15;
				break;
			case 5:
				cout<<"Total bill: "<<bill;
				flag=0;
				 break;
		}
		
		}
		while(flag==1);
	break;
	case 2:
		//Lunch
	
		do
		{
		int choice1,amount;
		
		cout<<"Today's menu for Lunch  is:\n";
		cout<<"1.Chicken karahi (Rs. 1050/kg)\n2.Mutton Karahi(Rs. 1800/Kg)\n3.Egg fried rice (Rs. 450/plate)\n4.BBQ(Rs. 1050/dozen)5.For exit"<<endl;
		cout<<"Enter number to corresponding choice: ";
		cin>>choice1;
		switch(choice1)
		{
			case 1:
				{
				
				cout<<"Enter amount of chicken karahi i.e 1kg,2kg etc\n";
				cin>>amount;
				bill+=amount*1050;
				break;
			}
			break;
			case 2:
				
				cout<<"Enter amount of Mutton karahi i.e 1kg, 2kg etc\n";
				cin>>amount;
				bill+=amount*1800;
				break;
			case 3:
				
				cout<<"Enter amount of Egg fried rice i.e 1,2 plates etc\n";
				cin>>amount;
				bill+=amount*450;
				break;
			case 4:
				cout<<"Enter amount of BBQ i.e 1,2 dozen etc\n";
				cin>>amount;
				bill+=amount*1050;
				break;
			case 5:
				cout<<"Total bill: "<<bill;
				flag=0;
				 break;
		}
		
		}
		while(flag==1);
	break;
		case 3:
		//Lunch
	
		do
		{
		int choice1,amount;
		
		cout<<"Today's menu for Lunch  is:\n";
		cout<<"1.Chicken karahi (Rs. 1050/kg)\n2.Mutton Karahi(Rs. 1800/Kg)\n3.Egg fried rice (Rs. 450/plate)\n4.BBQ(Rs. 1050/dozen)\n5.Sajji (Rs. 800/kg)\n6.For exit"<<endl;
		cout<<"Enter number to corresponding choice: ";
		cin>>choice1;
		switch(choice1)
		{
			case 1:
				{
				
				cout<<"Enter amount of chicken karahi i.e 1kg,2kg etc\n";
				cin>>amount;
				bill+=amount*1050;
				break;
			}
			break;
			case 2:
				
				cout<<"Enter amount of Mutton karahi i.e 1kg, 2kg etc\n";
				cin>>amount;
				bill+=amount*1800;
				break;
			case 3:
				
				cout<<"Enter amount of Egg fried rice i.e 1,2 plates etc\n";
				cin>>amount;
				bill+=amount*450;
				break;
			case 4:
				cout<<"Enter amount of BBQ i.e 1,2 dozen etc\n";
				cin>>amount;
				bill+=amount*1050;
				break;
			case 5:
				cout<<"Enter amount of Sajji i.e 1,2 kg etc\n";
				cin>>amount;
				bill+=amount*800;
				break;
			case 6:
				cout<<"Total bill: "<<bill;
				flag=0;
				 break;
		}
		
		}
		while(flag==1);
	break;
}



	
	return 0;
}
