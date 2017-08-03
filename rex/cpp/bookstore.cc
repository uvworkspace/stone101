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


classclass BookStore{
  public:
    void addBook(Book *book);
    void listBooks();
    ~BookStore2();
  private:
    vector<Book*> books;
};
void BookStore::addBook(Book *book){
  books.push_back(book);
}
void BookStore::listBooks(){
  for (int i=0; i<books.size();i++){
    cout<< books[i]->id <<" "<<books[i]->title<<" "<<books[i]->price<<" "<<books[i]->pages<<endl;
  }
}
BookStore::~BookStore2(){
  for (Book *b : books) {
    delete b;
  }
}

int main ()
{
  BookStore store;
  Book *b1=new Book("#1","ABC",50,100);
  Book *b2=new Book("#2","def",30,60);
  store2.addBook(b1);
  store2.addBook(b2);
  store2.listBooks();
}