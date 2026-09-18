#include <iostream>
#include <stdio.h>
using namespace std;

class Library
{
    int itemID;
    char title[25];

public:

    void getdata()
    {
        cout << "\n-----------------------------------------";
        cout << "\nEnter Item ID : ";
        cin >> itemID;

        cout << "\nEnter Library Item Title : ";
        cin >> title;
    }

    void putdata()
    {
        cout << "\n-----------------------------------------";
        cout << "\n********** Library Item Details **********";
        cout << "\n-----------------------------------------";

        cout << "\nItem ID : " << itemID;
        cout << "\nTitle : " << title << endl;
    }
};

class Book : public Library
{
public:
    char author[25];
    int pages;

    void accept_data()
    {
        getdata();

        cout << "\nEnter Author Name : ";
        cin >> author;

        cout << "\nEnter Number of Pages : ";
        cin >> pages;
    }

    void display_data()
    {
        putdata();

        cout << "\nAuthor Name : " << author;
        cout << "\nNumber of Pages : " << pages;
    }
};

class Magazine : public Library
{
public:
    char publisher[25];
    int issueNo;

    void accept_data()
    {
        getdata();

        cout << "\nEnter Publisher Name : ";
        cin >> publisher;

        cout << "\nEnter Issue Number : ";
        cin >> issueNo;
    }

    void display_data()
    {
        putdata();

        cout << "\nPublisher Name : " << publisher;
        cout << "\nIssue Number : " << issueNo;
    }
};

int main()
{
    Book b;
    Magazine m;

    cout << "\n********** BOOK **********";

    b.accept_data();
    b.display_data();

    cout << "\n\n********** MAGAZINE **********";

    m.accept_data();
    m.display_data();

    cout << "\n-----------------------------------------\n";

    return 0;
}