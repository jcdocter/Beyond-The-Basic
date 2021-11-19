#pragma once
#include <string>
#include <Vector>
#include "Transactie.h"

class BankAccount{
    private:
        float balance;
        std::vector<Transaction> transactions;

    public:
        BankAccount(float _balance);
        virtual ~BankAccount();
        const float GetBalance() const;

        void TransactionHistory(const Transaction& transaction);

        BankAccount operator+(const Transaction& transaction) const;
        BankAccount operator-(const Transaction& transaction) const;
        
        friend std::ostream& operator<<(std::ostream& _ostream, const BankAccount& _bankAccount);
};