#include <iostream>
#include <string>
#include <memory>
#include <vector>
using namespace std;

class Item {
  protected:
    string id;
    double price;
  public:
    virtual void prSummary() {
      return;
    }
    virtual ~Item() {}
};

class Book : public Item {
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
    void prSummary() {
      cout << "Book " << id << " " << title;
      cout << " $" << price << " ";
      cout << "Pages " << page << endl;
    }
    ~Book() {
      cout << "Deleted Book [" << title << "]" << endl;
    }
};

class Card : public Item {
  public:
    string message;
    Card(string id, string message, double price) {
      this -> id = id;
      this -> message = message;
      this -> price = price;
    }
    void prSummary() {
      cout << "Card " << id << " " << message;
      cout << " $" << price << endl;
    }
    ~Card() {
      cout << "Deleted Card [" << message << "]" << endl;
    }
};

class Bookstore2 {
  vector <unique_ptr <Item>> pitems;
  public:
    void addItem(unique_ptr <Item> pitem) {
      cout << "Added ";
      pitem -> prSummary();
      pitems.push_back(move(pitem));
    }
    
    void listItems() {
      for (int i = 0; i < pitems.size(); i++) {
        pitems[i] -> prSummary();
      }
    }
};

void test() {
  Bookstore2 bookstore;
  unique_ptr <Item> abook(new Book("#21", "Hello_ABC", 150.0, 120));
  unique_ptr <Item> bbook(new Book("#1b", "Stone_Coding", 255.6, 200));
  unique_ptr <Item> cbook(new Book("#3f", "Begin_C++", 300.0, 200));
  bookstore.addItem(move(abook));
  bookstore.addItem(move(bbook));
  bookstore.addItem(move(cbook));
  unique_ptr <Item> acard(new Card("#4a", "Happy Birthday", 20.1));
  unique_ptr <Item> bcard(new Card("#5s", "Congrats" , 10.8));
  bookstore.addItem(move(acard));
  bookstore.addItem(move(bcard));
}

int main() {
  test();
  return 0;
}