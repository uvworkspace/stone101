#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> prime(int n) {
  vector <int> nums;
  //vector <bool> cnt;
  vector <int> primes;
  for (int k = 2; k <= n; k++) {
    nums.push_back(k);
  }
  for (int i = 2; i <= n; i++) {
    cnt[i] = false;
  }
  
  for (int i = 2; i <= n; i++) {
    if (!cnt[i]) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (!cnt[j]) {
          if (nums[j] % nums[i] == 0) {
            cnt[j] = true;
          }
        }
      }
      primes.push_back(nums[i]);
    }
  }
  return primes;
}
int main() {
  int n;
  cin >> n;
  prime(n);
}