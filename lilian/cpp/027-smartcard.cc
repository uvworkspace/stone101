#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Item {
  public:
    string id;
    double price;
    virtual void prSummary() {}
};

class Book: public Item
{ 
  public:
    string title;
    Book(string id,string title,double price);
    void prSummary();
};
Book::Book(string id,string title,double price) {
  this->id = id;
  this->title = title;
  this->price = price;
}
void Book::prSummary(){
  cout<< id <<" "<< title<<" "<< price<<endl;
}

class Card:public Item{
  public:
    string message;
    Card(string id,string message,double price);
    void prSummary();
};
Card::Card(string id,string message,double price) {
  this->id = id;
  this->message = message;
  this->price = price;
}

void Card::prSummary(){
  cout<< id <<" "<<message<<" "<<price<<endl;
}

class BookStore2{
  public:
    void addItem(Item *item);
    void listItems();
    virtual ~BookStore2();
  private:
    vector<Item*> items;
};
void BookStore2::addItem(Item *item){
  items.push_back(item);
}
void BookStore2::listItems(){
  for (int i=0; i<items.size();i++) {
    items[i]->prSummary();
  }
}
BookStore2::~BookStore2(){
  for (Item *i : items) {
    delete i;
  }
  //cout<< "clear";
}

int main ()
{
  BookStore2 store2;
  Book *b1=new Book("#1","ABC",50);
  Card *c1=new Card("#2","def",30);
  store2.addItem(b1);
  store2.addItem(c1);
  store2.listItems();
  Book *b2=new Book("#3","GHJ",40);
  Card *c2=new Card("#4","rty",20);
  store2.addItem(b2);
  store2.addItem(c2);
  store2.listItems();
}