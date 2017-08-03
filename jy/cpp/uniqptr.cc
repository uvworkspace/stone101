#include <iostream>
#include <string>
#include <memory>
#include <algorithm>
using namespace std;

class Book {
public:
  string id;
  Book(string id) : id(id) { cout << "created Book [" << id << "]\n"; }
  virtual ~Book() { cout << "deleted Book [" << id << "]\n"; }
};

void fun() {
  Book b1("b1");
  Book *b2 = new Book("b2");
  unique_ptr<Book> b3(new Book("b3"));
}

bool byId(const unique_ptr<Book>& a, const unique_ptr<Book>& b) {
  return a->id < b->id;
}

void fun2() {
  vector<unique_ptr<Book>> books;
  books.push_back(unique_ptr<Book>(new Book("y")));
  books.push_back(unique_ptr<Book>(new Book("x")));
  books.push_back(unique_ptr<Book>(new Book("z")));

  sort(books.begin(), books.end(), byId);
  for (int i=0, n =books.size(); i<n; i++) {
    cout << i << ": " << books[i]->id << endl;
  }
}
int main() {
  fun();
  //fun2();
}