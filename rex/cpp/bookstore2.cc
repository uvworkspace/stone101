#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Book
{
  public:
    Book(string id,string title,int pages,double price);
    string id;
    string title;
    int pages;
    double price;
};
Book::Book(string id,string title,int pages,double price):id(id),title(title),pages(pages),price(price){}


class Bookstore
{ private:
    vector<Book*> books;
  public:
    void addBook(Book* book);
    void listBooks();
};
    
void Bookstore::addBook(Book* book){
  books.push_back(book);
}
void Bookstore::listBooks(){
  for(int i = 0; i<books.size();i++){
    cout<<books[i]->id<<" "<<books[i]->title<<" "<<books[i]->price<<"  "<<books[i]->pages<<endl;
  }
}




int main ()
{
  Bookstore b2;
  Book book1("#21", "Hello_ABC", 150, 120);
  Book book2("#1b", "Stone_Coding", 255, 200);
  Book book3("#3f", "Begin_C++", 300, 200);
  
  b2.addBook(&book1);
  b2.addBook(&book2);
  b2.addBook(&book3);
  
  b2.listBooks();
}