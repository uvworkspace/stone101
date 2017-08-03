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

class Bookstore2 {
  vector <Book*> pbooks;
  public:
    void addBook(Book * pbook) {
      pbooks.push_back(pbook);
    }
    void listBooks() {
      for (int i = 0; i < pbooks.size(); i++) {
        cout << "Book " << pbooks[i] -> id << " " << pbooks[i] -> title;
        cout << " $" << pbooks[i] -> price << " ";
        cout << "Pages " << pbooks[i] -> page << endl;
      }
    }
};

int main() {
  Book abook("#21", "Hello_ABC", 150.0, 120);
  Book bbook("#1b", "Stone_Coding", 255.6, 200);
  Book cbook("#3f", "Begin_C++", 300.0, 200);
  Bookstore2 bookstore;
  bookstore.addBook(&abook);
  bookstore.addBook(&bbook);
  bookstore.addBook(&cbook);
  
  
  bookstore.listBooks();
  
  Book dbook("#43", "Sean's Adventure", 450.9, 500);
  bookstore.addBook(&dbook);
  Book *ebook = new Book("#54", "NBA Hall of Fame", 304.2, 203);
  bookstore.addBook(ebook);
  bookstore.listBooks();
  
}