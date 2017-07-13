#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>
using namespace std;

void print(const vector<int>& vec){
    for (int e : vec)
        cout << e << " ";
    cout << '\n';
}

void random_generate(vector<int>& vec, int size){
    vec.clear(); 
    int n = rand() % size + 1; 
    for (int i = 0; i < n; i++)
        vec.push_back(rand());
}

int main(){
    srand(time(NULL));
    vector<int> vec;
    cout << "vector initialize......\n";
    vec.clear();
    random_generate(vec, 12);
    cout << "1st random vector: ";
    print(vec);
    random_generate(vec, 7);
    cout << "2nd random vector: ";
    print(vec);
    random_generate(vec, 3);
    cout << "3rd random vector: ";
    print(vec);
}