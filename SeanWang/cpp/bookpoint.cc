#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Book {
  string id, title;
  double price;
  int page;
};

void prBook(const Book * i)
{
  cout << "Book " << i -> id << " " << i ->title;
  cout << " $" << i ->price << " ";
  cout << "Pages " << i ->page << endl;
}

bool byId(const Book * a, const Book * b)
{
  return a -> id  < b -> id;
}

int bsearch(string& id, int left, int right, vector <Book *>& pbooks)
{
  if (right - left <= 0)
  {
    cout << "Not Found";
    return -1;
  }
  int mid = (left + right) / 2;
  if (id == pbooks[mid] -> id)
  {
    prBook(pbooks[mid]);
  }
  else if (id < pbooks[mid] -> id)
  {
    return bsearch(id, left, mid, pbooks);
  }
  else
  {
    return bsearch(id, mid + 1, right, pbooks);
  }
}

int main ()
{
  vector <Book> books;
  vector <Book *> pbooks;
  int num;
  cin >> num;
  for (int i = 0; i < num; i++)
  {
    struct Book abook;
    cin >> abook.id >> abook.title >> abook.price >> abook.page;
    books.push_back(abook);
  }
  for (int i = 0; i < num; i++) {
    struct Book *pointer;
    pointer = &books[i];
    pbooks.push_back(pointer);
  }
  sort(pbooks.begin(), pbooks.end(), byId);
  string id;
  while (cin >> id)
  {
    bsearch(id, 0, num, pbooks);
  }
}
