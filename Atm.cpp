#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 5000.0, amount;

    cout << "===== ATM MENU =====" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;

    do {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: ₹" << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: ₹";
                cin >> amount;
                balance += amount;
                cout << "Amount Deposited Successfully." << endl;
                break;

            case 3:
                cout << "Enter withdrawal amount: ₹";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient Balance!" << endl;
                } else {
                    balance -= amount;
                    cout << "Please collect your cash." << endl;
                }
                break;

            case 4:
                cout << "Thank you for using ATM." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
