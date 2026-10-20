#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
private:
    std::string accountNumber;
    char* accountHolderName;
    double balance;

    void copyName(const char* name);

public:
    //The Constructors and Destructors//
    BankAccount();
    BankAccount(std::string num, std::string name, double initialBalance);
    BankAccount(const BankAccount& other);
    BankAccount& operator=(const BankAccount& other);
    ~BankAccount();

    //Getters and Setters//
    std::string getAccountNumber() const;
    std::string getAccountHolderName() const;
    double getBalance() const;
    void setAccountHolderName(std::string name);

    // Legacy Method//
    void deposit(double amount);
    bool withdraw(double amount);
    void displayAccountInfo() const;

    // Overloaded Operators//
    BankAccount& operator+=(double amount);
    BankAccount& operator-=(double amount);
    bool operator==(const BankAccount& other) const;
    bool operator<(const BankAccount& other) const;
    bool operator>(const BankAccount& other) const;

    // Static Utility Functions//
    static void printAccount(const BankAccount& account);
    static BankAccount createAccountFromInput();
};

#endif // BANKACCOUNT_H
