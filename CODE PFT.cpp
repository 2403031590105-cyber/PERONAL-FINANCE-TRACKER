#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Transaction {
    string type; // "Income" or "Expense"
    string desc;
    double amount;
};

int main() {
    vector<Transaction> transactions;
    double balance = 0.0;

    while (true) {
        cout << "\nPersonal Finance Tracker\n";
        cout << "1. Add Income\n2. Add Expense\n3. View Transactions\n4. View Balance\n5. Exit\nChoose: ";
        int choice;
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            Transaction t;
            t.type = "Income";
            cout << "Enter description: ";
            getline(cin, t.desc);
            cout << "Enter amount: ";
            cin >> t.amount;
            cin.ignore();
            transactions.push_back(t);
            balance += t.amount;
            cout << "Income added.\n";
        } else if (choice == 2) {
            Transaction t;
            t.type = "Expense";
            cout << "Enter description: ";
            getline(cin, t.desc);
            cout << "Enter amount: ";
            cin >> t.amount;
            cin.ignore();
            transactions.push_back(t);
            balance -= t.amount;
            cout << "Expense added.\n";
        } else if (choice == 3) {
            cout << "\nTransactions:\n";
            cout << left << setw(10) << "Type" << setw(20) << "Description" << setw(10) << "Amount" << endl;
            for (const auto& t : transactions) {
                cout << left << setw(10) << t.type << setw(20) << t.desc << setw(10) << t.amount << endl;
            }
        } else if (choice == 4) {
            cout << "Current Balance: " << balance << endl;
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }
    return 0;
}