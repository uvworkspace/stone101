#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
bool has(vector <int>& sigl, int x)
{
  for (int i = 0; i < sigl.size(); i++)
  {
    if (sigl[i] == x)
    {
      return true;
    }
  }
  return false;
}

bool had(vector <int>& nums, int x, int end)
{
  for (int i = 0; i < end; i++)
  {
    if (nums[i] == x)
    {
      return true;
    }
  }
  return false;
}

void uniq1a(vector <int>& nums)
{
  vector <int> sigl ({});
  for (int i = 0; i < nums.size(); i++)
  {
    if (!has(sigl, nums[i]))
    {
      sigl.push_back(nums[i]);
    }
  }
  for (int j = 0; j < sigl.size(); j++)
  {
    cout << sigl[j] << " ";
  }
  cout << endl;
}

void uniq1b(vector <int>& nums)
{
  for (int i = 0; i < nums.size(); i++)
  {
    if (!had(nums, nums[i], i))
    {
      cout << nums[i] << " ";
    }
  }
}

void uniq2(vector <int>& nums)
{
  vector<int> Nums = nums;
  if (Nums.size() == 0)
  {
    return;
  }
  sort(Nums.begin(), Nums.end());
  cout << Nums[0] << " ";
  for (int i = 1; i < Nums.size(); i++)
  {
    if (Nums[i] != Nums[i - 1])
    {
      cout << Nums[i] << " ";
    }
  }
}

void uniq3(vector <int>& nums)
{
  map<int, bool> maps;
  for (int i = 0; i < nums.size(); i++)
  {
    if (!maps[nums[i]])
    {
      cout << nums[i] << " ";
      maps[nums[i]] = true;
    }
  }
}

int main()
{
  vector<int> nums({2, 2, 5, 7, 6, 7, 10, 20});
  uniq3(nums);
}