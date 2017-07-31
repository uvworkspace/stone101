#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


struct Book
{
  string id;
  string title;
  int pages;
  double price;
};

bool byId(const Book &a, const Book &b) { return a.id < b.id; }
bool byTitle(const Book &a, const Book &b) { return a.title < b.title; }
bool byPages(const Book &a, const Book &b) { return a.pages > b.pages; }
bool byPrice(const Book &a, const Book &b) { return a.price> b.price; }



void prBooks(vector<Book>& books){
  for (Book& b : books) {
    cout << "Book " << b.id << " " << b.title<<" "<<b.pages;
    cout << " $" << b.price << endl;
  }
}

int bSearch(vector<Book>& books,string& Id,int start,int end){
  if( start >= end)return - 1;
  int mid = (start + end)/2;
  if (books[mid].id == Id)return mid;
  if (books[mid].id < Id)return bSearch(books, Id, mid + 1, end);
  else return bSearch(books, Id, start, mid);
}
int main ()
{
  vector<Book> books;
  Book book;
  string id;
  int num;
  cin>>num;
  for(int i = 1;i<=num;i++){
    cin>>book.id>>book.title>>book.price>>book.pages;
    books.push_back(book);
  }

  sort(books.begin(),books.end(),byId);
  int len = books.size();
  string Id;
  while(cin>>Id){
    int position = bSearch(books,Id,0,len);
    if (position==-1) cout<<"not found";
    else  cout << "Book " << books[position].id << " " << books[position].title<<" "<<books[position].pages;
    cout << " $" << books[position].price << endl;
  }
}