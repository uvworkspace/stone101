#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Book {
  string id;
  string title;
  double price;
  int page;
};

bool byId(const Book &a, const Book &b) {
  return a.id < b.id;
}
bool byTitle(const Book &a, const Book &b) {
  return a.title < b.title;
}
bool byPrice(const Book &a, const Book &b) {
  return a.price > b.price;
}
bool byPage(const Book &a, const Book &b) {
  return a.page > b.page;
}

void pr(vector<Book>& books) {
  for (Book& b : books) {
    cout << "Book " << b.id << " " << b.title;
    cout << " $ " << b.price << " Page: " << b.page << endl;
  }
  cout << "------------------" << endl;
}

int main () {
  vector <Book>books;
  string a,b;
  double c;
  int d;
  while (cin >> a) {
    cin >> b >> c >> d;
    books.push_back({a,b,c,d});
  }
  pr(books);
  sort(books.begin(),books.end(),byId);
  pr(books);
  sort(books.begin(),books.end(),byTitle);
  pr(books);
  sort(books.begin(),books.end(),byPrice);
  pr(books);
  sort(books.begin(),books.end(),byPage);
  pr(books);
}