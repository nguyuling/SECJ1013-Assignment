#include <iostream>
using namespace std;

int main() {
    int choice, bill=0;
    cout<<"Welcome to the Food Ordering System\n"
        <<"1. Pizza - $10\n"
        <<"2. Burger - $5\n"
        <<"3. Sandwich - $7\n"
        <<"Enter the number of the item you want to order: ";

    cin>>choice;

    switch(choice){
        case 1:
            bill += 10;
            break;
        case 2:
            bill += 5;
            break;
        case 3:
            bill += 7;
            break;
        default:
            cout<<"Invalid choice\n";
    }

    cout<<"Your total bill is: $"<<bill<<endl;

    system("pause");

}