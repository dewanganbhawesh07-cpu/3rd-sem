#include <iostream>

class BankAccount {
private:
    double balance; // Encapsulated data
public:
    BankAccount(double initial) : balance(initial) {}
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }
    double getBalance() const { return balance; }
};

int main() {
    BankAccount acc(1000.0);
    acc.deposit(500.0);
    std::cout << "Current Balance: $" << acc.getBalance() << "\n";
    return 0;
}
