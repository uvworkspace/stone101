#include <iostream>
#include <string>
#include <memory>
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
  } catch (bad_allocation e) {
    b2 = 0;
  }
  unique_ptr<Book> b3(new Book("b3"));
  
  if (b2) delete b2;
}

int main() {
  fun();
}