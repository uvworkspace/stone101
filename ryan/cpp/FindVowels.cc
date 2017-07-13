#include <iostream>
using namespace std;

string VOWELS = "aeiou";
bool isVowel(char c) {
  for (int i=0; i<VOWELS.length(); i++) {
    
  }
  return 0;
}

int findVowel(string s) {
  
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