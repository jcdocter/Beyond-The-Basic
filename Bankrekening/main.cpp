#include <iostream>
#include <string>
#include "Bankrekening.h"
#include "Transactie.h"

using namespace std;

int main(){
    BankAccount bankAccount = BankAccount(1000.0f);

    Transaction transaction1 = Transaction("AF ",380.11f, "8/12/2020");
    Transaction transaction2 = Transaction("BIJ ",1000.0f, "8/12/2020");
    Transaction transaction3 = Transaction("AF ",720.35f, "8/12/2020");

    bankAccount.TransactionHistory(transaction1);
  //  bankAccount.TransactionHistory(transaction2);
  //  bankAccount.TransactionHistory(transaction3);

    bankAccount = bankAccount - transaction1;
    cout << bankAccount << endl;

   // bankAccount = bankAccount + transaction2;
   // cout << bankAccount << endl;

   // bankAccount = bankAccount - transaction3;
   //cout << bankAccount << endl;

    cout << "Uw saldo is: " << bankAccount.GetBalance() << endl;
}