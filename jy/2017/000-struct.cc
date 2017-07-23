#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Book
{
  int id;
  string title;
  double price;
};

bool byId(const Book &a, const Book &b) { return a.id < b.id; }
bool byTitle(const Book &a, const Book &b) { return a.title < b.title; }
bool byPrice(const Book &a, const Book &b) { return a.price > b.price; }

void pr(vector<Book>& books) {
  for (Book& b : books) {
    cout << "Book " << b.id << " " << b.title;
    cout << " $" << b.price << endl;
  }
}

int main ()
{
  vector<Book> books =
  {
    { 15, "Begin C++", 300.5 },
    { 34, "More C++", 450.5 },
  };

  Book b2 = { 21, "Hello ABC", 100.0 };
  
  Book b3;
  b3.id = 11;
  b3.title = "Stone Programming";
  b3.price = 250;

  books.push_back(b2);
  books.push_back(b3);

  pr(books);
  
  sort(books.begin(), books.end(), byId);
  pr(books);
  
  sort(std::begin(books), std::end(books), byTitle);
  pr(books);
  
  sort(std::begin(books), std::end(books), byPrice);
  pr(books);
}