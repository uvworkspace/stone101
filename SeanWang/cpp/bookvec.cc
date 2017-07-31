#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Book
{
  string id;
  string title;
  double price;
  int page;
};

bool byId(const Book& a, const Book& b)
{
  return a.id < b.id;
}
bool byTitle(const Book& a, const Book& b)
{
  return a.title < b.title;
}
bool byPrice(const Book& a, const Book& b)
{
  return a.price < b.price;
}

void prBooks(vector<Book>& books)
{
  for (Book& book : books)
  {
    cout << "Book " << book.id << " " << book.title;
    cout << " $" << book.price << " ";
    cout << "Pages " << book.page << endl;
  }
}

int main ()
{
  vector<Book> books;

  Book b1 = { "#aaa", "Hello ABC", 250.0, 100 };
  Book b2 = {};
  b2.id = "#bbb";
  b2.title = "Stone Programming";
  b2.price = 100;
  b2.page = 200;

  books.push_back(b1);
  books.push_back(b2);
  
  struct Book abook;
  string id;
  while (cin >> abook.id)
  {
    cin >> abook.title >> abook.price >> abook.page;
    books.push_back(abook);
  }
  
  sort(books.begin(), books.end(), byId);
  prBooks(books);
  
  sort(books.begin(), books.end(), byTitle);
  prBooks(books);
  
  sort(books.begin(), books.end(), byPrice);
  prBooks(books);
}