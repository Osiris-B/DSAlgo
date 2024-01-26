// Given an integer array nums that may contain duplicates,
// return all possible subsets(the power set).

// The solution set must not contain duplicate subsets.
// Return the solution in any order.

#include <bits/stdc++.h>
using namespace std;

void findSubsets(int idx, vector<int> &nums, vector<vector<int>> &ans,
                 vector<int> &v) {
  ans.push_back(v);

  for (int i = idx; i < nums.size(); i++) {
    if (i != idx && nums[i] == nums[i - 1]) {
      continue;
    }

    v.push_back(nums[i]);
    findSubsets(i + 1, nums, ans, v);
    v.pop_back();
  }
}

int main() {
  vector<int> nums = {1, 2, 2};

  vector<vector<int>> ans;
  vector<int> v;

  sort(nums.begin(), nums.end());
  findSubsets(0, nums, ans, v);

  for (vector<int> &combination : ans) {
    for (int i : combination) {
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}
