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

void pr(Book n) {
    cout << "Book " << n.id << " " << n.title;
    cout << " $ " << n.price << " Page: " << n.page << endl;
}

int find1(vector<Book> &books,string n) {
  for (int i=0;i<books.size();++i) {
    if (books[i].id==n) {
      return i;
    }
  }
  return -1;
}

int find2(vector<Book> &books,string n) {
  int start=0;
  int end=books.size()-1;
  while (start<end) {
    int a=(start+end)/2;
    if (books[a].id>n) {
      end=a;
    } else if (books[a].id<n) {
      start=a+1;
    } else {
      return a;
    }
  }
  return -1;
}

int main () {
  vector <Book>books;
  string a,b;
  double c;
  int d,n;
  cin >> n;
  for (int i=1;i<=n;++i) {
    cin >> a >> b >> c >> d;
    books.push_back({a,b,c,d});
  }
  sort(books.begin(),books.end(),byId);
  string aa;
  while (cin >> aa) {
    if (find2(books,aa)==-1) {
      cout << "Not Found" << endl;
    } else {
      pr(books[find2(books,aa)]);
    }
  }
}