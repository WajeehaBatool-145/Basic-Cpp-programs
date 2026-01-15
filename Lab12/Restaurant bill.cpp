#include <iostream>
using namespace std;

void menu()
{
    cout << "\n--- MENU ---\n";
    cout << "1. Chicken Karahi (Rs. 1050/kg)\n";
    cout << "2. Mutton Karahi (Rs. 1800/kg)\n";
    cout << "3. Egg Fried Rice (Rs. 450/plate)\n";
    cout << "4. BBQ (Rs. 1050/dozen)\n";
    cout << "5. Exit\n";
    cout << "Enter number to corresponding choice: ";
}

int calculateBill(int choice, int amount)
{
    int cost = 0; 
	  

    switch (choice)
    {
        case 1: cost = amount * 1050; break;
        case 2: cost = amount * 1800; break;
        case 3: cost = amount * 450;  break;
        case 4: cost = amount * 1050; break;
    }
    return cost;
}

int main()
{
    int choice, amount;
    int bill = 0;
    int flag = 1;

    do
    {
        menu();
        cin >> choice;

        switch (choice)
        {
            case 1:
            case 2:
            case 3:
            case 4:
                cout << "Enter quantity: ";
                cin >> amount;
                bill += calculateBill(choice, amount); 
                break;

            case 5:
            	{
				float tax = bill * 0.05;           
                float service = bill * 0.10;      
                float finalBill = bill + tax + service;

                cout << "\nSubtotal: Rs. " << bill;
                cout << "\nTax (5%): Rs. " << tax;
                cout << "\nService Charges (10%): Rs. " << service;
                cout << "\nFinal Bill: Rs. " << finalBill << endl;

                flag = 0;
                break;
}
            default:
                cout << "Invalid choice!\n";
                break;
        }

    } while (flag == 1);

    return 0;
}

