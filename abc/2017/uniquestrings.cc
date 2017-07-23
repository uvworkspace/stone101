#include<iostream>
#include<vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

//int main ()
//{
  //std::map<string,int> cnts;

  //cnts["abc"]=10;
  //cnts["def"]=30;
  //cout << "abc: " << cnts["abc"] << endl;
  //cout << "def: " << cnts["def"] << endl;
  //cout << "xxx: " << cnts["xxx"] << endl;
  //int cnt = cnts.count("yyy");
  //cout << "yyy: " << (cnt > 0 ? cnts["yyy"] : 0) << endl;

  //for(auto& pair : cnts) {
  //  cout << "[" << pair.first << "] " << pair.second << endl;0
  //}
//}
int uniq2 (vector<string>&arr){
  std::map<string,int> cnts;
  for(string &n:arr){
    cnts[n]++;
    }
  for(auto& pair : cnts) {
    cout << "[" << pair.first << "] " << pair.second << endl;
  }
  cout <<endl;
}
int uniq1 (vector<string>arr){
  vector<string>name;
  vector<int>count;
  sort(arr.begin(),arr.end());
  
  
}
int main(){
  vector<string>arr={"a","bc","d","a","g"} ;
  uniq2 (arr);
}
