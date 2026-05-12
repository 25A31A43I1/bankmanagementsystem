#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    float balance;

public:
    // Create Account
    void createAccount() {
        cout << "\nEnter Account Holder Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    
    void deposit() {
        float amount;

        cout << "\nEnter Amount to Deposit: ";
        cin >> amount;

        balance += amount;

        cout << "Amount Deposited Successfully!\n";
    }

    // Withdraw Money
    void withdraw() {
        float amount;

        cout << "\nEnter Amount to Withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient Balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        }
    }

    // Check Balance
    void checkBalance() {
        cout << "\nCurrent Balance: ₹" << balance << endl;
    }

   
    void displayDetails() {
        cout << "\n===== ACCOUNT DETAILS =====\n";
        cout << "Account Holder Name : " << name << endl;
        cout << "Account Number      : " << accountNumber << endl;
        cout << "Balance             : ₹" << balance << endl;
    }
};

int main() {
    BankAccount account;

    int choice;

    do {
        cout << "\n========== BANK MANAGEMENT SYSTEM ==========\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Display Account Details\n";
        cout << "6. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            account.createAccount();
            break;

        case 2:
            account.deposit();
            break;

        case 3:
            account.withdraw();
            break;

        case 4:
            account.checkBalance();
            break;

        case 5:
            account.displayDetails();
            break;

        case 6:
            cout << "\nThank You for Using the Bank Management System!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}
