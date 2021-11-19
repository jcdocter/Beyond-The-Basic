#pragma once

#include <string>

class Transaction{
    private:
        std::string debit;
        std::string date;
        float amount;

    public:
        Transaction(std::string _debit, float _amount, std::string _date);
        const std::string& GetDebit() const;
        const std::string& GetDate() const;
        const float GetAmount() const;
};

