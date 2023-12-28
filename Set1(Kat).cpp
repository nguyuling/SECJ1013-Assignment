// PHAVANEE KATRIYA PHON-AMNUAISUK A23CS0170
// NGU YU LING A23CS0149

#include <iostream>
#include <string>
using namespace std;

double displayAccountInfo(double &); //displays initial account info
double deposit(double &); //adds amount to current balance
double withdraw(double &); //subtracts amount from current balance and prints success message


int main() {
    double currentBalance = 200;
    char newTransaction='y';
    displayAccountInfo(currentBalance);
    while(newTransaction!='n'){
        deposit(currentBalance);
        withdraw(currentBalance);
        displayAccountInfo(currentBalance);
        cout<<"Do you want to perform another transaction? (Y/N): ";
        cin>>newTransaction;
    }

    system("pause");
    return 0;

}

double displayAccountInfo(double &balance) {
    string userName = "User 1", accountNumber = "1013202341";
    cout<<"<<<<< My Accounts Overview >>>>>\n";
    cout<<"Account Holder Name: "<<userName<<"\n";
    cout<<"Account Number: "<<accountNumber<<"\n";
    cout<<"Balance: RM "<<balance<<"\n\n";
}

double deposit(double &balance) {
    double depositAmount=500;
    balance += depositAmount;
    cout<<"<<<<< Deposit Transaction >>>>>\n";
    cout<<"Deposit of RM 500 succesful.\n\n";
}

double withdraw(double &balance){
    double withdrawAmount=200;
    balance -= withdrawAmount;
    cout<<"<<<<< Withdrawal Transaction >>>>>\n";
    cout<<"Withdraw of RM 200 succesful.\n\n";
}
