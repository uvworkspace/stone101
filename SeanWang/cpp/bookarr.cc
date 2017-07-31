#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string idarr[100];
string namearr[100];
double pricearr[100];
int pagearr[100];
int index[100];


bool byId(int a, int b) 
{
  return idarr[a] < idarr[b];
}

void prBook(int i)
{
  cout << "Book " << idarr[i] << " " << namearr[i];
  cout << " $" << pricearr[i] << " ";
  cout << "Pages " << pagearr[i] << endl;
}

int bsearch(int num, string id, int left, int right)
{
  
  if (right - left <= 0)
  {
    cout << "Not Found";
    return -1;
  }
  int mid = (left + right) / 2;
  if (id == idarr[index[mid]])
  {
    prBook(index[mid]);
  }
  else if (id < idarr[index[mid]])
  {
    return bsearch(num, id, left, mid);
  }
  else
  {
    return bsearch(num, id, mid + 1, right);
  }
}

int main()
{
  int num;
  cin >> num;
  for (int i = 0; i < num; i++)
  {
    index[i] = i;
  }
  for (int i = 0; i < num; i++)
  {
    idarr[i] = "";
    namearr[i] = "";
    pricearr[i] = 0;
    pagearr[i] = 0;
  }
    string id;
  for (int i = 0; i < num; i++)
  {
    cin >> idarr[i];
    cin >> namearr[i];
    cin >> pricearr[i];
    cin >> pagearr[i];
  }
  sort(index, index + num, byId);
  string ID;
  while (cin >> ID) {
    bsearch(num, ID, 0, num);
  }
}