#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
  public:
    string id;
    string title;
    double price;
    int page;
    Book(string id, string title, double price, int page) {
      this -> id = id;
      this -> title = title;
      this -> price = price;
      this -> page = page;
    }
};

class Bookstore {
  vector <Book> books;
  public:
    void addBook(Book& book) {
      books.push_back(book);
    }
    void listBooks() {
      for (int i = 0; i < books.size(); i++) {
        cout << "Book " << books[i].id << " " << books[i].title;
        cout << " $" << books[i].price << " ";
        cout << "Pages " << books[i].page << endl;
      }
    }
};

int main() {
  Book abook("#21", "Hello_ABC", 150.0, 120);
  Book bbook("#1b", "Stone_Coding", 255.6, 200);
  Book cbook("#3f", "Begin_C++", 300.0, 200);
  Bookstore bookstore;
  bookstore.addBook(abook);
  bookstore.addBook(bbook);
  bookstore.addBook(cbook);

  
  bookstore.listBooks();
  
  Book dbook("#43", "Sean's Adventure", 450.9, 500);
  bookstore.addBook(dbook);
  
  bookstore.listBooks();
  
}