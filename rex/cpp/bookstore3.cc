#include <iostream>
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
    virtual ~Item(){cout<<"deleted"<<endl;}
  protected:
    string id;
    double price;
};


class Book: public Item
{
  public:
    Book(string id,string title,double price): Item(id,price),title(title) {
      /*this->id = id;
      this->title = title;
      this->price = price;*/
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
    vector<Item*> items;
  public:
    void addItem(Item* item);
    void listItems();
    ~Bookstore(){
      for(Item * it:items){
        delete it;
      }
    }
};
    
void Bookstore::addItem(Item *item){
  items.push_back(item);
}
void Bookstore::listItems(){
  for(int i = 0; i<items.size();i++){
    items[i]->prDetails();
  }
}




int main ()
{
 
  Bookstore b3;
  Book *book1=new Book("#21", "Hello_ABC", 150);
  Book *book2=new Book("#1b", "Stone_Coding", 255);
  Book *book3=new Book("#3f", "Begin_C++", 300);
  Card *card1=new Card("#89","LOVE",10000);
  Card *card2=new Card("#76","Happybirthday",50);
  Card *card3=new Card("#2s","what's up",200);
  b3.addItem(book1);
  b3.addItem(book2);
  b3.addItem(book3);
  b3.addItem(card1);
  b3.addItem(card2);
  b3.addItem(card3);

  b3.listItems();
}