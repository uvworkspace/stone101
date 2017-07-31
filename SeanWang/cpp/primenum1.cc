#include <iostream>
#include <vector>
using namespace std;

bool has(vector <int>& nums, int i) {
  for (int k = 0; k < nums.size(); k++) {
    if (nums[k] == i) {
      return true;
    }
  }
  return false;
}

void erase(vector <int>& nums, int i) {
  for (int k = 0; k < nums.size(); k++) {
    if (nums[k] == i) {
      nums.erase(nums.begin() + k);
      return;
    }
  }
}

vector <int> prime(int n) {
  vector <int> nums;
  vector <int> primes;
  for (int k = 2; k <= n; k++) {
    nums.push_back(k);
}
  for (int i = 2; i <= n; i++) {
    if (has(nums, i)) {
      for (int j = i + 1; j <= n; j++) {
        if (has(nums, j)) {
          if (j % i == 0) {
            erase(nums, j);
          }
        }
      }
      primes.push_back(i);
    }
  }
  return primes;
}

int main() {
  int n;
  cin >> n;
  vector <int> result = prime(n);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << ", ";
  }
}