#include <iostream>
using namespace std;

string VOWELS = "aeiou";
bool isVowel(char c) {
  bool vowel;
  for (int i=0; i<VOWELS.length(); i++) {
    if (c = 'a' || 'e' || 'i' || 'o' || 'u') {
      vowel = true;
    }
  }
  return 0;
}

int findVowel(string s) {
  int count = 0;
  for (int i = 0; i < s.length(); i++) {
    if (isVowel(s[i]) = true) {
      count++;
    }
  }
  return count;
  return 0;
}

int main() {
  cout << isVowel('a') << endl;
  
  string s1 = "facetiously";
  int nVowels = findVowel(s1);
  cout << nVowels << endl; // should print 5
  
  string s2 = "stone";
  nVowels = findVowel(s1);
  cout << nVowels << endl; // should print 2
}