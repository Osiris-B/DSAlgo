#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> genRow(int n) {
  if (n == 0)
    return {{}};
  if (n == 1)
    return {{1}};

  vector<vector<int>> pRow = genRow(n - 1);
  vector<int> cRow(n, 1);

  for (int i = 1; i < n - 1; i++) {
    cRow[i] = pRow.back()[i] + pRow.back()[i - 1];
  }

  pRow.push_back(cRow);
  return pRow;
}

int main() {
  int nrows;
  cout << "Enter number of rows for Pascal's triangle: ";
  cin >> nrows;

  vector<vector<int>> ans;
  ans = genRow(nrows);

  cout << "Pascal's Triangle: " << endl;
  for (vector<int> v : ans) {
    int n = ans.size() - v.size();

    for (int i = 0; i < n; i++) {
      cout << " ";
    }
    for (int num : v) {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}
