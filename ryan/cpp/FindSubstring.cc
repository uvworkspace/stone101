#include <iostream>
using namespace std;

bool match (string s, int start, string part) {
  for (int i = 0; i < part.length(); i++) {
    if (start+i < s.length() && s[start + i] != part[i]) {
      return false;
    }
  }
  return true;
}

int findSubstr (string s, string part) {
  int index = -1;
  for (int i = 0; i < s.length() - part.length() + 1; i++) {
    if (match(s, i, part) == true) {
      index = i;
      return index;
    }
  }
  return index;
}


bool match3 (string s, int start, string part) {
  for (int i = start; i < s.length(); i++) {
    if (i-start < part.length() && s[i] != part[i-start]) return false;
  }
  return true;
}

bool match2 (string s, int start, string part) {
  for (int i = 0; i < part.length(); i++) {
    if (start+i < s.length() && s[start+i] != part[i]) return false;
  }
  return true;
}

bool match4 (string s, int start, string part) {
  return !s.substr(start, part.length()).compare(part);
}

int main() {
  string s1 = "world";
  cout << match(s1, 0, "oo") << endl; // should output false (0)
  cout << match(s1, 0, "wo") << endl; // should output true (1)
  cout << match(s1, 1, "or") << endl; // should ouput true (1)
  
  string s2 = "hello";
  cout << findSubstr(s2, "eo") << endl; // should output -1
  cout << findSubstr(s2, "el") << endl << endl << endl; // should output index
  
  string s3 = "computer";
  cout << match(s3, 0, "co") << endl;
  cout << match(s3, 4, "co") << endl;
  cout << findSubstr(s3, "pp") << endl;
  cout << findSubstr(s3, "er") << endl;
  
  string s4 = "light";
  cout << match(s4, 0, "ig") << endl;
  cout << match(s4, 0, "tt") << endl;
  cout << findSubstr(s4, "gh") << endl;
  cout << findSubstr(s4, "li") << endl;
  
  
}