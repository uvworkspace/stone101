#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool had(vector <string>& strvec, string text, int idx) {
  for (int i = 0; i < idx; i++) {
    if (strvec[i] == text) {
      return true;
    }
  }
  return false;
}

int count(vector <string>& strvec, string text, int idx) {
  int cnt = 1;
  for (int i = idx + 1; i < strvec.size(); i++) {
    if (strvec[i] == text) {
      cnt++;
    }
  }
  return cnt;
}

void uniqstr(vector <string>& strvec) {
  for (int i = 0; i < strvec.size(); i++) {
    if (!had(strvec, strvec[i], i)) {
      cout << strvec[i] << ": ";
      cout << count(strvec, strvec[i], i) << endl;
    }
  }
}

void uniqsort(vector <string> strvec) {
  sort(strvec.begin(), strvec.end());
  strvec.push_back("x");
  int cnt = 1;
  for (int i = 1; i < strvec.size(); i++) {
    if (strvec[i] == strvec[i - 1]) {
      cnt++;
    }
    else {
      cout << strvec[i - 1] << ": " << cnt << endl;
      cnt = 1;
    }
  }
}

void uniqmap(map <string, int>& cnts) {
    for (auto& pair : cnts) {
      cout << "[" << pair.first << "]: " << pair.second << endl;
    }
}

/*int main() {
  vector <string> strvec ({"sean", "lol", "sean", "hi", "hi", "lol"});
  uniqsort(strvec);
}*/

int main() {
  map <string,int> cnts;
  string text;
  while (cin >> text) {
    cnts[text]++;;
  }
  uniqmap(cnts);
}