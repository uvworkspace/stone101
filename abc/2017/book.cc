#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Book
{
  string id;
  string title;
  double price;
  int page;
};

bool byId(const Book &a, const Book &b) { return a.id < b.id; }
bool byTitle(const Book &a, const Book &b) { return a.title < b.title; }
bool byPrice(const Book &a, const Book &b) { return a.price > b.price; }
bool byPage(const Book &a, const Book &b) {return a.page > b.page;}
void pr(vector<Book>& books) {
  for (Book& b : books) {
    cout << "Book " << b.id << " " << b.title;
    cout << " $" << b.price <<"page"<< b.page<< endl;
  }
}

int main ()
{
  vector<Book> books =
  {
    { "^_^", "Begin C++", 300.5 },
    { "@_@", "More C++", 450.5 },
    { "$_$", "Hello ABC", 100.0 },
    { "#_#","Stone Programming", 250},
  };
  string id;
  string title;
  double price;
  int page;
  while(std::cin >> id){
    std::cin >> title;
    std::cin >> price;
    std::cin >> page;
    Book bo ={id,title,price,page};
    books.push_back(bo);
  }
  pr(books);
  cout <<"byId:"<<endl;
  sort(books.begin(), books.end(), byId);
  pr(books);
  cout <<"byTitle:"<<endl;
  sort(std::begin(books), std::end(books), byTitle);
  pr(books);
  cout <<"byPrice:"<<endl;
  sort(std::begin(books), std::end(books), byPrice);
  pr(books);
   cout <<"byPage:"<<endl;
  sort(std::begin(books), std::end(books), byPage);
  pr(books);
}