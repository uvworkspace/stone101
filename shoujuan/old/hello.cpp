#include <iostream>
using namespace std;

int main( ) {
   char map[26];
   string cmd, book, msg;
   int n;
   while (cin >> cmd) {
     cin >> book >> n >> msg;
     if (cmd[0] == 'e') {
       for (int i=0; i<n; ++i) {
         cout << (msg[i] == '_' ? '_' : book[msg[i] - 'a']);
       }
     } else {
       for (int i=0; i<26; ++i) {
         map[book[i]] = 'a' + i;
       }
       for (int i=0; i<n; ++i) {
         cout << (msg[i] == '_' ? '_' : map[msg[i]]);
       }
     }
          cout << endl;
   }
}