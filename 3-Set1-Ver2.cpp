// NGU YU LING A23CS0149
// PHAVANEE KATRIYA PHON-AMNUAISUK A23CS0170 

/* This program allows users to:
1. Add the title, author, and publication year of up to 100 books
1. Display all the books added to the library
3. Search a book by title from the library */

#include <iostream>
#include<cstring>
#include<cstdlib>
#include <conio.h>
using namespace std;

const int MAX_CHAR = 28000;
// the longest book title in the world has 27978 characters
const int MAX_BOOKS = 100;
// this library can store up to 100 books
char title[MAX_BOOKS][MAX_CHAR], author[MAX_BOOKS][MAX_CHAR], year[MAX_BOOKS][MAX_CHAR];
int choice;
int num; // num = 0 initially, increase by each loop of addBook function

int displayMainMenu();
void addBook(char [][MAX_CHAR], char [][MAX_CHAR], char [][MAX_CHAR], int &num);
void displayLibrary(char [][MAX_CHAR], char [][MAX_CHAR], char [][MAX_CHAR], int &num);
void searchByTitle(char [][MAX_CHAR], char [][MAX_CHAR], char [][MAX_CHAR], int &num);

int main(){
    do{
        displayMainMenu();
        switch(choice){
        case 1:
            addBook(title, author, year, num);
            break;
        case 2:
            displayLibrary(title, author, year, num);
            break;
        case 3:
            searchByTitle(title, author, year, num);
            break;
        case 4:
            cout << "\nGoodbye!" << "\n\n--------------------------------";
            break;
        default:
            cout << "Please enter either number 1, 2, 3 or 4 only.";
        }
    }while (choice != 4);
    
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

void addBook(char [][MAX_CHAR], char [][MAX_CHAR], char [][MAX_CHAR], int &num){
    if(num <= MAX_BOOKS){
        cout << "Enter book title: ";
        cin.getline(title[num], MAX_BOOKS);

        cout << "Enter author name: ";
        cin.getline(author[num], MAX_BOOKS);
    
        cout << "Enter publication year: ";
        cin.getline(year[num], MAX_BOOKS);

        cout << "\nBook added successfully!";
        num++; // num increase by each loop
    }
    else{
        cout << "You've reached the maximum amount of book in the library.";
    }
}

void displayLibrary(char [][MAX_CHAR], char [][MAX_CHAR], char [][MAX_CHAR], int &num){
    cout << "Library Contents:" << "\n====================";
    for(int i=0; i<num; i++){  // display all books added to the library  
        cout << "\nBook " << (i+1) << ": ";
        cout << "\nTitle: " << title[i];
        cout << "\nAuthor: " << author[i];
        cout << "\nYear: " << year[i] << endl;
    }
}

void searchByTitle(char [][MAX_CHAR], char [][MAX_CHAR], char [][MAX_CHAR], int &num){
    char searchTitle[MAX_CHAR];
    cout << "Enter the title to search: ";
    cin.getline(searchTitle, MAX_CHAR);

    for(int j=0; j<=num; j++){    // to loop for each book added
        if ((strcmp(searchTitle, title[j])) == 0){  // if the searchTitle is not same
            cout << "\nBook found:" << "\n====================";
            cout << "\nTitle: " << title[j];
            cout << "\nAuthor: " << author[j];
            cout << "\nYear: " << year[j];
            break;
        }
        else{
            if(j == num){
                cout << "\nBook not found, please try again.";
            }
        }
    }
}
