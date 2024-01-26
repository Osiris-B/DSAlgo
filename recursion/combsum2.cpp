// Given a collection of candidate numbers (candidates) and a target number
// (target), find all unique combinations in candidates where the candidate
// numbers sum to target.

// Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.

#include <bits/stdc++.h>
using namespace std;

void findComb(int idx, vector<int> &arr, int target, vector<vector<int>> &ans,
              vector<int> &c) {
  if (target == 0) {
    ans.push_back(c);
    return;
  }

  for (int i = idx; i < arr.size(); i++) {
    if (i > idx && arr[i] == arr[i - 1]) {
      continue;
    }
    if (arr[idx] > target) {
      break;
    }
    c.push_back(arr[i]);
    findComb(i + 1, arr, target - arr[i], ans, c);
    c.pop_back();
  }
}

vector<vector<int>> combSum(vector<int> &candidates, int target) {
  vector<vector<int>> ans;
  vector<int> c;

  sort(candidates.begin(), candidates.end());

  findComb(0, candidates, target, ans, c);

  return ans;
}

int main() {
  vector<int> candidates = {2, 5, 2, 1, 2};
  int target = 5;

  vector<vector<int>> result = combSum(candidates, target);

  cout << "Result:" << endl;
  for (const auto &combination : result) {
    cout << "[ ";
    for (int num : combination) {
      cout << num << " ";
    }
    cout << "]" << endl;
  }

  return 0;
}
