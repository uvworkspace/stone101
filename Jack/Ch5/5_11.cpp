#include <iostream>
using namespace std;
int main(){
   char choice;
   cout << "Hello! Welcome to the Stone Campus!!\n";
   cout << "What kinds of computer languages would you like to learn?\n"
   << "C++, Java, Python,etc. Or something else? (y/n):\n";
   cin >> choice;
   if(choice == 'n'){
      cout << "Ok! So, would you like to learn C++ ? (y/n):\n";
      cin >> choice;
      if(choice == 'n'){
         cout << "Ok! So, would you like to learn Java ? (y/n):\n";
         cin >> choice;
         if(choice == 'n'){
            cout << "Ok! So, would you like to learn Python ? (y/n):\n";
            cin >> choice;
            if(choice == 'n'){
               cout << "Ok! if you change your mind...  contact us!\n";
            }else{
               cout << "Nice! Let us start to learn Python\n";
            }
         }else{
            cout << "Nice! Let us start to learn Java\n";
         }
      }else{
         cout << "Nice! Let us start to learn C++\n";
      }
   }else{
      cout << "Well, let me show you an interesting computer language, Stone \n"
      << "It is very easy to learn! Let us try this? (y/n)\n";
      cin >> choice;
      if(choice == 'n'){
            cout << "Ok! if you change your mind...  contact us!\n";
         }else{
            cout << "Nice! Let us start to learn Stone\n";
      }
   }
}