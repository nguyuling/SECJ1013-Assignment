// PHAVANEE KATRIYA PHON-AMNUAISUK A23CS0170
// NGU YU LING A23CS0149
#include <iostream>
#include <conio.h>
using namespace std;
int displayAccountInfo(int curtBalance);
int deposit(int &);
int withdraw(int &);

int main(){
    int Balance = 200;
    char userInput;
    do {
        displayAccountInfo(Balance);
        deposit(Balance);
        withdraw(Balance);
        displayAccountInfo(Balance);
        cout << "\n\nDo you want to perform another transaction? (Y/N): ";
        cin >> userInput;
        cout << "\n";
    } while (userInput != 'n');

    getch();
    return 0;
}

int displayAccountInfo(int curtBalance){
    cout << "<<<<< My accounts Overview >>>>>";
    cout << "\nHolder's name: User 1";
    cout << "\nAccount number: 1013202341";
    cout << "\nBalance: " << curtBalance;
    return 0;
}

int deposit(int &curtBalance){
    int depTrans = 500;
    curtBalance += depTrans;
    cout << "\n\n<<<<< Deposit Transaction >>>>>";
    cout << "\nDeposit of RM " << depTrans << " successful.";
    return curtBalance;
}

int withdraw(int &curtBalance){
    int wdrawTrans = 200;
    curtBalance -= wdrawTrans;
    cout << "\n\n<<<<< Withdrawal Transaction >>>>>";
    if (curtBalance >= 0)
        cout << "\nWithdrawal of RM " << wdrawTrans << " successful.\n\n";
    else
        cout << "\nInsufficient funds for withdrawal.\n";
        system("pause");
        exit(0);
    return curtBalance;
}
