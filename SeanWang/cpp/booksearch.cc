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


void prBooks(vector<Book>& books)
{
  for (Book& book : books)
  {
    cout << "Book " << book.id << " " << book.title;
    cout << " $" << book.price << " ";
    cout << "Pages " << book.page << endl;
  }
}

void prBook(vector<Book>& books,int i)
{
  cout << "Book " << books[i].id << " " << books[i].title;
  cout << " $" << books[i].price << " ";
  cout << "Pages " << books[i].page << endl;
}

bool byId(const Book& a, const Book& b)
{
  return a.id < b.id;
}

int bsearch(vector<Book>& books, string& id, int left, int right)
{
  sort(books.begin(), books.end(), byId);
  
  if (right - left <= 0)
  {
    cout << "Not Found";
    return -1;
  }
  int mid = (left + right) / 2;
  if (id == books[mid].id)
  {
    prBook(books, mid);
  }
  else if (id < books[mid].id)
  {
    return bsearch(books, id, left, mid);
  }
  else
  {
    return bsearch(books, id, mid + 1, right);
  }
}

int main ()
{
  vector<Book> books;
  int num;
  cin >> num;
  for (int i = 0; i < num; i++)
  {
    struct Book abook;
    cin >> abook.id >> abook.title >> abook.price >> abook.page;
    books.push_back(abook);
  }
  string id;
  while (cin >> id)
  {
    bsearch(books, id, 0, books.size());
  }
  
}