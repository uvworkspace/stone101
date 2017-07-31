#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;


bool had(int nums[], int x, int end)
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

void uniq4(int nums[], int len)
{
  for (int i = 0; i < len; i++)
  {
    if (!had(nums, nums[i], i))
    {
      cout << nums[i] << " ";
    }
  }
}

void uniq5(int nums[], int len)
{
  sort (nums, nums + len);
  cout << nums[0] << " ";
  for (int i = 1; i < len; i++)
  {
    if (nums[i] != nums[i - 1])
    {
      cout << nums[i] << " ";
    }
  }
  cout << endl;
}


int main()
{
  int nums[] = {2, 2, 5, 7, 6, 7, 10, 20};
  int len = sizeof(nums) / sizeof(int);
  uniq5(nums, len);
  for (int i = 0; i < len; i++)
  {
    cout << nums[i] << " ";
  }
}