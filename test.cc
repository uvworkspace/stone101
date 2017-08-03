#include <iostream>
#include <map>
#include <string>
using namespace std;

int main ()
{
  std::map<string,int> cnts;

  cnts["abc"]=10;
  cnts["def"]=30;
  cout << "abc: " << cnts["abc"] << endl;
  cout << "def: " << cnts["def"] << endl;
  cout << "xxx: " << cnts["xxx"] << endl;
  int cnt = cnts.count("yyy");
  cout << "yyy: " << (cnt > 0 ? cnts["yyy"] : 0) << endl;

  for(auto& pair : cnts) {
    cout << "[" << pair.first << "] " << pair.second << endl;
  }
}