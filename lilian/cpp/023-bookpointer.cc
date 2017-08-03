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

bool byId(const Book *a, const Book *b){
  return a->id < b->id;
}
int binarysearch(vector<Book*> p_books, string& id){
  int low=0;
  int high=p_books.size()-1;
  while(low<=high){
    int mid=(low+high)/2;
    if (p_books[mid]->id==id)
      return mid;
    else if (p_books[mid]->id>id)
      high=mid-1;
    else if (p_books[mid]->id<id)
      low=mid+1;
  }
  return -1;
}

int main ()
{
  vector<Book> books;
  Book book;
  int num;
  cin >> num;
  for (int i=0;i<num;i++) {
    cin >> book.id>> book.title >> book.price>> book.pages ;
    books.push_back(book);
  }
  vector<Book*> p_books;
  for (int i = 0; i < num; i++) {
    p_books.push_back(&books[i]);
  }
  sort(p_books.begin(), p_books.end(), byId);
  string id;
  while(cin>>id){
    int k=binarysearch(p_books,id);
    if (k!=-1){
      cout << p_books[k]->title <<" " << p_books[k]->price <<" " << p_books[k]->pages<<endl;
    }
    else 
      cout << "not found" << endl;
  }
}