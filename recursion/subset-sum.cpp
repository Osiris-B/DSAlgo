// Given a list arr of N integers, return sums of all subsets in it.

#include <bits/stdc++.h>
using namespace std;

void findSum(int idx, vector<int> &arr, int n, int sum, vector<int> &ans) {
  if (idx == n) {
    ans.push_back(sum);
    return;
  }

  // pick number
  findSum(idx + 1, arr, n, sum + arr[idx], ans);

  // don't pick number
  findSum(idx + 1, arr, n, sum, ans);
}

int main() {
  vector<int> arr = {5, 2, 1};
  int n = 3;

  vector<int> ans;
  findSum(0, arr, n, 0, ans);
  sort(ans.begin(), ans.end());

  cout<<"Subset sums: "<<endl;
  for (int i : ans) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
