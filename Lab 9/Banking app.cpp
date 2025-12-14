#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0; 
    double amount;

    while(true) {
        // Display menu
        cout << "\nMenu:\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: // Deposit
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if(amount <= 0) {
                    cout << "Invalid amount! Please enter a positive number.";
                } else {
                    balance += amount;
                    cout << "Amount deposited successfully. Current Balance: $" << balance;
                }
                break;

            case 2: // Withdraw
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if(amount <= 0) {
                    cout << "Invalid amount! Please enter a positive number.";
                } else if(amount > balance) {
                    cout << "Insufficient balance! Current Balance: $" << balance;
                } else {
                    balance -= amount;
                    cout << "Amount withdrawn successfully. Current Balance: $" << balance;
                }
                break;

            case 3: // Check Balance
                cout << "Current Balance: $" << balance;
                break;

            case 4: // Exit
                cout << "Thank you for using the banking system. Goodbye!";
                return 0;

            default:
                cout << "Invalid choice! Please enter 1-4.";
        }
    }

    return 0;
}

