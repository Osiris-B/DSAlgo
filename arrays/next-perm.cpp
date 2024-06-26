#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> nums = {1, 2, 3};
  cout << "Original vector: ";
  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;

  int idx = -1;
  int n = nums.size();

  for (int i = n - 2; i >= 0; i--) {
    if (nums[i] < nums[i + 1]) {
      idx = i;
      break;
    }
  }

  if (idx == -1) {
    reverse(nums.begin(), nums.end());
  } else {
    for (int i = n - 1; i > idx; i--) {
      if (nums[i] > nums[idx]) {
        swap(nums[i], nums[idx]);
        break;
      }
    }
    reverse(nums.begin() + idx + 1, nums.end());
  }

  cout << "Next permutation: ";
  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
