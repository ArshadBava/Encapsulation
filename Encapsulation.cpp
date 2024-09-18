#include <iostream>
#include <string>

class BankAccount {
private:
    int accountNumber;  
    double balance;

public:
    BankAccount(int accNum, double initialBalance) 
        : accountNumber(accNum), balance(initialBalance) {} // Corrected constructor

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: " << amount << std::endl;
        } else {
            std::cout << "Deposit amount must be positive." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew: " << amount << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount." << std::endl;
        }
    }

    double checkBalance() const {
        return balance;
    }
};

int main() {
    int accountNumber;  
    double initialBalance;

    std::cout << "Enter account number: ";
    std::cin >> accountNumber; 
    std::cout << "Enter initial balance: ";
    std::cin >> initialBalance;

    BankAccount myAccount(accountNumber, initialBalance);

    std::cout << "Initial balance: " << myAccount.checkBalance() << std::endl;

    double depositAmount;
    std::cout << "Enter deposit amount: ";
    std::cin >> depositAmount;
    myAccount.deposit(depositAmount);
    std::cout << "Balance after deposit: " << myAccount.checkBalance() << std::endl;

    double withdrawAmount;
    std::cout << "Enter withdrawal amount: ";
    std::cin >> withdrawAmount;
    myAccount.withdraw(withdrawAmount);
    std::cout << "Balance after withdrawal: " << myAccount.checkBalance() << std::endl;

    return 0;
}

