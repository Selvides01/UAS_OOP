#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
    // Constructor
    Book(string title, string author, int year) {
        this->title = title;
        this->author = author;
        this->year = year;
    }

    void display_info() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }

    bool is_old() {
        return year < 2000;
    }
};

int main() {

    Book selvi("bukan untuk dibaca", "SELVI DESTI RIYANI", 2024);

    cout << "Book Information:" << endl;
    selvi.display_info();
    if (selvi.is_old()) {
        cout << "Status: Old" << endl;
    } else {
        cout << "Status: Not Old" << endl;
    }

    return 0;
}
