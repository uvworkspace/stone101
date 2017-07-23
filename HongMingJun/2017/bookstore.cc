#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct Book{
  string id;
  string name;
  double price;
  int page;
};
void out(vector<Book>& v){
  for(int i=0;i<v.size();i++){
/*    cout<<"ID "<<v[i].id<<" ";
    cout<<"Name "<<v[i].name<<" ";
    cout<<"Price "<<v[i].price<<" ";
    cout<<"Page "<<v[i].page<<endl;*/
    cout<<v[i].id<<" ";
    cout<<v[i].name<<" ";
    cout<<v[i].price<<" ";
    cout<<v[i].page<<endl;
  }
}
bool byId(const Book &a, const Book &b) { return a.id < b.id; }
bool byTitle(const Book &a, const Book &b) { return a.name < b.name; }
bool byPrice(const Book &a, const Book &b) { return a.price > b.price; }
int main(){
  vector<Book> v;
  string id2,name2;
  double price2;
  int page2;
  while(cin>>id2){
    cin>>name2>>price2>>page2;
    Book b1={id2,name2,price2,page2};
    v.push_back(b1);
  }
/*  Book b1={"b1","book1",3.14,10};
  v.push_back(b1);
  Book b2={"b2","book2",1.618,12};
  v.push_back(b2);*/
  sort(v.begin(), v.end(), byId);
  sort(begin(v), end(v), byTitle);
  sort(begin(v), end(v), byPrice);
  out(v);
}