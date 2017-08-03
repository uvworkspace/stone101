#include <iostream>
#include <vector>
#include <string>
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
    string title;
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
};



class Bookstore2 {
  vector <Item*> pitems;
  public:
    void addItems(Item * pitem) {
      pitems.push_back(pitem);
    }
    
    void listItems() {
      for (int i = 0; i < pitems.size(); i++) {
        pitems[i] -> prSummary();
      }
    }
    
};

int main() {
  Book *abook = new Book("#21", "Hello_ABC", 150.0, 120);
  Book *bbook = new Book("#1b", "Stone_Coding", 255.6, 200);
  Book *cbook = new Book("#3f", "Begin_C++", 300.0, 200);
  Bookstore2 bookstore;
  bookstore.addItems(abook);
  bookstore.addItems(bbook);
  bookstore.addItems(cbook);
  Card *acard = new Card("#4a", "Happy Birthday", 20.1);
  Card *bcard = new Card("#5s", "Congrats" , 10.8);
  bookstore.addItems(acard);
  bookstore.addItems(bcard);
  
  bookstore.listItems();
  
  
}