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

bool byId( Book* a, Book* b) { return a->id < b->id; }

/*void prBooks(vector<Book>& books){
  for (Book& b : books) {
    cout << "Book " << b.id << " " << b.title<<" "<<b.pages;
    cout << " $" << b.price << endl;
  }
}*/

int bSearch(vector<Book*>&pbooks,vector<Book>& books,string& Id,int start,int end){
  if( start >= end)return - 1;
  int mid = (start + end)/2;
  if (pbooks[mid]->id == Id)return mid;
  if (pbooks[mid]->id < Id)return bSearch(pbooks, books, Id, mid + 1, end);
  else return bSearch(pbooks,books, Id, start, mid);
}
int main ()
{
  vector<Book> books;
  Book book;
  string id;
  int num;
  cin>>num;
  for(int i = 0;i<num;i++){
    cin>>book.id>>book.title>>book.price>>book.pages;
    books.push_back(book);
  }
  /*for (int i=0; i<books.size(); i++) {
    Book b = books[i];
    cout << i << ": " << b.id << "," << b.title << endl;
  }*/
  
  vector<Book*> pbooks;
  for(int i = 0;i<num;i++){
    pbooks.push_back(&books[i]);
  }
  sort(pbooks.begin(),pbooks.end(),byId);
  /*for (int i=0; i<pbooks.size(); i++) {
    Book *p = pbooks[i];
    cout << i << ": " << p->id << "," << p->title << endl;
    
  }*/
  int len = pbooks.size();
  string Id;
  while(cin>>Id){
    int position = bSearch(pbooks,books,Id,0,len);
    if (position==-1){
     cout<<"not found";
    }
    else {
      cout << "Book " << pbooks[position]->id << " " << pbooks[position]->title<<" $"<<pbooks[position]->price<<" "<<pbooks[position]->pages;
    cout << endl;
    }
  }
}