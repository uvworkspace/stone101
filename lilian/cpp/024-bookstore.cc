#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Book
{ 
  public:
    string id;
    string title;
    double price;
    int pages;
    Book(string id,string title,double price,int pages);
};
Book::Book(string id,string title,double price,int pages):id(id),title(title),price(price),pages(pages){}

class BookStore{
  public:
    void addBook(Book &book);
    void listBooks();
  private:
    vector<Book> books;
};
void BookStore::addBook(Book &book){
  books.push_back(book);
}
void BookStore::listBooks(){
  for (int i=0; i<books.size();i++){
    cout<< books[i].id <<" "<<books[i].title<<" "<<books[i].price<<" "<<books[i].pages<<endl;
  }
}

class BookStore2{
  public:
    void addBook(Book *book);
    void listBooks();
    ~BookStore2();
  private:
    vector<Book*> books;
};
void BookStore2::addBook(Book *book){
  books.push_back(book);
}
void BookStore2::listBooks(){
  for (int i=0; i<books.size();i++){
    cout<< books[i]->id <<" "<<books[i]->title<<" "<<books[i]->price<<" "<<books[i]->pages<<endl;
  }
}
BookStore2::~BookStore2(){
  for (Book *b : books) {
    delete b;
  }
}

int main ()
{
  BookStore store;
  Book b1("#1","ABC",50,100);
  Book b2("#2","def",30,60);
  store.addBook(b1);
  store.addBook(b2);
  store.listBooks();
  
  BookStore2 store2;
  Book *b3=new Book("#1","ABC",50,100);
  Book *b4=new Book("#2","def",30,60);
  store2.addBook(b3);
  store2.addBook(b4);
  store2.listBooks();
}