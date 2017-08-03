#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <memory>
using namespace std;

class Item {
  public:
  string id;
  double price;
  Item(string id, double price): id(id), price(price) {}
  virtual ~Item() { cout << "DESTR " << id << endl; }
};

class Book : public Item
{
  public:
    int pages;
    string title;
    Book(string id,string title,int pages,double price);
};
Book::Book(string id,string title, int pages,double price)
  :Item(id, price), title(title), pages(pages) {}
  
class Card : public Item
{
  public:
    string message;
    Card(string id,string message,double price);
};

Card::Card(string id,string message,double price)
  :Item(id, price), message(message){}

class BookStore {
  public:
    void addItem(unique_ptr<Item> item);
    void listItems();
  private:
    vector<unique_ptr<Item>> items;
};
void BookStore::addItem(unique_ptr<Item> item){
  items.push_back(move(item));
}
void BookStore::listItems(){
  for (int i=0; i<items.size();i++){
    cout<< items[i]->id << ": " << items[i]->price<<endl;
  }
}

int main ()
{
  BookStore store;
  auto b2=unique_ptr<Item>(new Book("#2","def",30,60));
  store.addItem(unique_ptr<Item>(new Card("#1","CCC",100)));
  store.addItem(move(b2));
  store.listItems();
}