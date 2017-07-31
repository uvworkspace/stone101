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

bool byId(const Book &a, const Book &b){
  return a.id < b.id;
}
int binarysearch(vector<Book>& books, string& id){
  int low=0;
  int high=books.size()-1;
  while(low<=high){
    int mid=(low+high)/2;
    if (books[mid].id==id)
      return mid;
    else if (books[mid].id>id)
      high=mid-1;
    else if (books[mid].id<id)
      low=mid+1;
  }
  return -1;
}
int searchbook(vector<Book>& books, string& id){
  for (int i=0, n=books.size(); i<n;i++){
    if (id==books[i].id) return i;
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
  sort(books.begin(), books.end(), byId);
  string id;
  while(cin>>id){
    int k=binarysearch(books,id);
    if (k!=-1){
      cout << books[k].title <<" " << books[k].price <<" " << books[k].pages<<endl;
    }
    else 
      cout << "not found" << endl;
  }
}