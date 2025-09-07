# PERONAL-FINANCE-TRACKER
# Personal Finance Tracker

This project is a simple Personal Finance Tracker implemented in C++. It allows users to manage their income and expenses, view all transactions, and check their current balance through a menu-driven interface.

## Features

- Add income with description and amount.
- Add expense with description and amount.
- View all transactions in a tabular format.
- View current balance.
- Exit the application.

## Project Structure

```
personal-finance-tracker
├── Untitled-3          # Source code (main.cpp)
├── Makefile            # Build rules for compiling the project
└── README.md           # Documentation for the project
```

## Building the Project

To build the project, navigate to the project directory and run the following command:

```
make
```

Or, compile manually:

```
g++ Untitled-3 -o personal-finance-tracker.exe
```

## Running the Application

After building the project, you can run the application using the following command:

```
personal-finance-tracker.exe
```

## Sample Output

```
Personal Finance Tracker
1. Add Income
2. Add Expense
3. View Transactions
4. View Balance
5. Exit
Choose: 1
Enter description: Salary
Enter amount: 50000
Income added.

Choose: 2
Enter description: Groceries
Enter amount: 2000
Expense added.

Choose: 3

Transactions:
Type      Description          Amount    
Income    Salary               50000     
Expense   Groceries            2000      

Choose: 4
Current Balance: 48000

Choose: 5
```

## License

This project is open-source and available for modification and distribution.
