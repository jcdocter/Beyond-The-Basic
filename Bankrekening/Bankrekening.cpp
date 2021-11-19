#include <iostream>
#include "Bankrekening.h"

BankAccount::BankAccount(float _balance){
//    std::cout << "My balance is: " << _balance << std::endl;

    this->balance = _balance;
}

BankAccount::~BankAccount() {

}

const float BankAccount::GetBalance() const{
    return balance;
}

void BankAccount::TransactionHistory(const Transaction& transaction){
    transactions.push_back(Transaction(transaction));
}

BankAccount BankAccount::operator+(const Transaction& transaction) const{
    return BankAccount(balance + transaction.GetAmount());
}

BankAccount BankAccount::operator-(const Transaction& transaction) const{
    return BankAccount(balance - transaction.GetAmount());
}

std::ostream& operator<<(std::ostream& _ostream, const BankAccount& _bankAccount){

    _ostream << _bankAccount.transactions.data()->GetDebit()
             << " "
             << _bankAccount.transactions.data()->GetAmount()
             << " "
             << _bankAccount.transactions.data()->GetDate()
             << std::endl;

    return _ostream;
}