#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Book
{
  string id;
  string title;
  double price;
  int page;
};

bool byId(const Book &a, const Book &b) { return a.id < b.id; }
bool byTitle(const Book &a, const Book &b) { return a.title < b.title; }
bool byPrice(const Book &a, const Book &b) { return a.price > b.price; }
bool byPage(const Book &a, const Book &b) {return a.page > b.page;}
void pr(vector<Book>& books) {
  for (Book& b : books) {
    cout << "Book " << b.id << " " << b.title;
    cout << " $" << b.price <<"page"<< b.page<< endl;
  }
}

int findbook(string bo,vector<Book> books){
  for (int q=0;q<books.size();q++){
    if (bo==books[q].id){
      cout << "Book " << books[q].id << " " << books[q].title;
      cout << " $" << books[q].price <<"page"<< books[q].page<< endl;
      return q;
    }
  }
  return -1;
}

int main ()
{
  vector<Book> books;
  int n;
  string id;
  string title;
  double price;
  int page;
  while(std::cin >> n){
    for (int w=0;w<n;w++){
      std::cin >> id;
      std::cin >> title;
      std::cin >> price;
      std::cin >> page;
      Book bo ={id,title,price,page};
      books.push_back(bo);
    }
  }
  while(std::cin >> id){
    int a=findbook(id,books)>=0;
    if(a>=0){
      cout << "Book " << books[a].id << " " << books[a].title;
      cout << " $" << books[a].price <<"page"<< books[a].page<< endl;
    }
    else{
      cout<<"no find";
    }
  }
}