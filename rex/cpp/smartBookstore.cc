#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Item
{ 
  public:
    virtual void prDetails(){
      return;
    }
    virtual ~Item(){cout<<id<<" deleted"<<endl;}
  protected:
    string id;
    double price;
};


class Book: public Item
{
  public:
    Book(string id,string title,double price)/*: Item(id,price),title(title)*/ {
      this->id = id;
      this->title = title;
      this->price = price;
    }
    void prDetails(){
      cout<<id<<" "<<title<<" $"<<price<<endl;
    }
  private:  
    string title;
};

class Card: public Item
{
  public:
    Card(string id, string message, double price) {
      this->id = id;
      this->message = message;
      this->price = price;
    }
    void prDetails(){
        cout<<id<<" "<<message<<" $"<<price<<endl;
    }
  private:
    string message;
};

class Bookstore
{ private:
    vector<unique_ptr<Item>> items;
  public:
    void addItem(unique_ptr<Item> item);
    void listItems();
};
    
void Bookstore::addItem(unique_ptr<Item> item){
  items.push_back(move(item));
}
void Bookstore::listItems(){
  for(int i = 0; i<items.size();i++){
    items[i]->prDetails();
  }
}




int main ()
{
 
  Bookstore b3;
  unique_ptr<Item> book1(new Book("#21", "Hello_ABC", 150));
  unique_ptr<Item> book2(new Book("#1b", "Stone_Coding", 255));
  unique_ptr<Item> book3(new Book("#3f", "Begin_C++", 300));
  unique_ptr<Item> card1(new Card("#89","LOVE",10000));
  unique_ptr<Item> card2(new Card("#76","Happybirthday",50));
  unique_ptr<Item> card3(new Card("#2s","what's up",200));
  b3.addItem(move(book1));
  b3.addItem(move(book2));
  b3.addItem(move(book3));
  b3.addItem(move(card1));
  b3.addItem(move(card2));
  b3.addItem(move(card3));

  b3.listItems();
}

