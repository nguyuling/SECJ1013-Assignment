// NGU YU LING A23CS0149 
// PHAVANEE KATRIYA PHON-AMNUAISUK A23CS0170

#include <iostream>
#include<cstring>
#include<cstdlib>
#include <conio.h>
using namespace std;

/* This program allows users to:
1. Add the title, author, and publication year of only one book
2. Display the book added to the library
3. Search the book by title from the library
(Any attempt to add more than 1 book will cause the memory of the previous book added being overwritten)
(Hence, version 2 of this program exists) */

const int MAX_BOOKS = 1000;
int choice;
char title[MAX_BOOKS], author[MAX_BOOKS], year[MAX_BOOKS];

int displayMainMenu();
void addBook(char [], char [], char []);
void displayLibrary(char [], char [], char []);
void searchByTitle(char [], char [], char []);

int main(){
    do{
        displayMainMenu();
        switch(choice){
        case 1:
            addBook(title, author, year);
            break;
        case 2:
            displayLibrary(title, author, year);
            break;
        case 3:
            searchByTitle(title, author, year);
            break;
        case 4:
            cout << "\n\nGoodbye!" << "\n\n--------------------------------";
            exit(0);
        default:
            cout << "Please enter either number 1, 2, 3 or 4 only.";
        }
    }while (isdigit(choice));
    
    getch();
    return 0;
}

int displayMainMenu(){
    cout << "\n\n<<<<<Library Management System>>>>>";
    cout << "\n========================================";
    cout << "\n1. Add a Book" << "\n2. Display Library" << "\n3. Search by Title" << "\n4. Quit";
    cout << "\nEnter your choice: ";
    cin >> choice;
    cin.ignore(1, '\n');
    cout << "\n";
    return choice;
}

void addBook(char [], char [], char []){
    cout << "Enter book title: ";
    cin.getline(title, MAX_BOOKS);

    cout << "Enter author name: ";
    cin.getline(author, MAX_BOOKS);
   
    cout << "Enter publication year: ";
    cin.getline(year, MAX_BOOKS);

    cout << "\nBook added successfully!";
}

void displayLibrary(char [], char [], char []){
    cout << "Library Contents:" << "\n====================";
    cout << "\nTitle: " << title;
    cout << "\nAuthor: " << author;
    cout << "\nYear: " << year;
}

void searchByTitle(char [], char [], char []){
    char searchTitle[MAX_BOOKS];
    cout << "Enter the title to search: ";
    cin.getline(searchTitle, MAX_BOOKS);

    if (strcmp(searchTitle, title)){
        cout << "\nBook not found, please try again.";
    }
    else{
        cout << "\nBook found:" << "\n====================";
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nYear: " << year;
    }
}
