// PHAVANEE KATRIYA PHON-AMNUAISUK A23CS0170
// NGU YU LING A23CS0094

#include <iostream>
#include <string>
using namespace std;

void displayAccountInfo(); //displays initial account info
double deposit(double balance); //adds amount to current balance
double withdraw(double balance); //subtracts amount from current balance and prints success message


int main() {
    int currentBalance = 200;
    char newTransaction='y';
    displayAccountInfo();
    while(newTransaction!='n'){
        deposit(currentBalance);
        withdraw(currentBalance);
        displayAccountInfo();
        cout<<"Do you want to perform another transaction? (Y/N): ";
        cin>>newTransaction;
    }

    system("pause");
    return 0;

}

void displayAccountInfo() {
    string userName = "User 1", accountNumber = "1013202341";
    int currentBalance = 200;
    cout<<"<<<<< My Accounts Overview >>>>>\n";
    cout<<"Account Holder Name: "<<userName<<"\n";
    cout<<"Account Number: "<<accountNumber<<"\n";
    cout<<"Balance: RM "<<currentBalance<<"\n\n";
}

double deposit(double balance) {
    double depositAmount=500;
    currentBalance += depositAmount;
    cout<<"<<<<< Deposit Transaction >>>>>\n";
    cout<<"Deposit of RM 500 succesful.\n\n";
}

double withdraw(double balance){
    double withdrawAmount=200;
    currentBalance -= withdrawAmount;
    cout<<"<<<<< Withdrawal Transaction >>>>>\n";
    cout<<"Withdraw of RM 200 succesful.\n\n";
}