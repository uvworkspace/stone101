#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Book
{
  string id;
  string title;
  double price;
  int pages;
};

bool byId(const Book &a, const Book &b){
  return a.id < b.id;
}
bool byTitle(const Book &a, const Book &b){
  return a.title < b.title;
}
bool byPrice(const Book &a, const Book &b){
  return a.price < b.price;
}
void prbook(vector<Book> books){
  for (Book& book : books) {
    cout << book.id << " " << book.title <<" " << book.price <<" " << book.pages<<endl;
    }
}
int main ()
{
  vector<Book> books;
  Book book;
  while (cin >> book.id) {
    cin >> book.title >> book.price>> book.pages ;
    books.push_back(book);
  }
  sort(books.begin(), books.end(), byId);
  prbook(books);
  sort(books.begin(), books.end(), byTitle);
  prbook(books);
  sort(books.begin(), books.end(), byPrice);
  prbook(books);

}