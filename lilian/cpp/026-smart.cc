#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

class Book
{ 
  public:
    string id;
    string title;
    double price;
    int pages;
    Book(string id,string title,double price,int pages);
    virtual ~Book() { cout << "deleted Book [" << id << "]\n"; }
};
Book::Book(string id,string title,double price,int pages):id(id),title(title),price(price),pages(pages)
{cout << "created Book [" << id << "]\n";}

class BookStore2{
  public:
    void addBook(unique_ptr<Book> book);
    void listBooks();
  private:
    vector<unique_ptr<Book>> books;
};
void BookStore2::addBook(unique_ptr<Book> book){
  books.push_back(move(book));
  //books.push_back(unique_ptr<Book>(new Book);
}
void BookStore2::listBooks(){
  for (int i=0; i<books.size();i++){
    cout<< books[i]->id <<" "<<books[i]->title<<" "<<books[i]->price<<" "<<books[i]->pages<<endl;
  }
}


int main ()
{
  BookStore2 store2;
  //Book *b3=new Book("#1","ABC",50,100);
  unique_ptr<Book> b3(new Book("#1","ABC",50,100));
  //Book *b4=new Book("#2","def",30,60);
  unique_ptr<Book> b4(new Book("#2","def",30,60));
  store2.addBook(move(b3));
  store2.addBook(move(b4));
  //store2.listBooks();
}