#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> nums = {1, 1, 1, 2, 2, 3};
  int k = 2;
  unordered_map<int, int> hash;
  vector<int> ans;

  vector<pair<int, int>> temp;

  cout << "Input: " << endl;
  for (int n : nums) {
    cout << n << " ";
  }
  cout << endl;

  for (int n : nums) {
    hash[n]++;
  }

  for (auto entry : hash) {
    temp.push_back({entry.second, entry.first});
  }

  sort(temp.begin(), temp.end(), greater<pair<int, int>>());

  for (int i = 0; i < k; i++) {
    ans.push_back(temp[i].second);
  }

  cout << "Output: " << endl;
  for (int n : ans) {
    cout << n << " ";
  }
  cout << endl;

  return 0;
}
