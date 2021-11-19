#include <iostream>

# include "Transactie.h"

Transaction::Transaction(std::string _debit, float _amount, std::string _date){
    this->debit = _debit;
    this->amount = _amount;
    this->date = _date;

}

const std::string& Transaction::GetDebit() const{
    return debit;
}

const std::string& Transaction::GetDate() const{
    return date;
}

const float Transaction::GetAmount() const{
    return amount;
}