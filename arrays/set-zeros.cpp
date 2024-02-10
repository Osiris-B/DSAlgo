#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
  int n = matrix.size();
  int m = matrix[0].size();
  int col0 = 1;

  cout << "Initial matrix: " << endl;
  for (vector<int> v : matrix) {
    for (int num : v) {
      cout << num << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] == 0) {
        matrix[0][j] = 0;

        if (i >= 0) {
          matrix[i][0] = 0;
        } else {
          col0 = 0;
        }
      }
    }
  }

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      if (matrix[i][0] == 0 | matrix[0][j] == 0) {
        matrix[i][j] = 0;
      }
    }
  }

  if (matrix[0][0] == 0) {
    for (int i = 0; i < n; i++) {
      matrix[0][i] = 0;
    }
  }

  if (col0 == 0) {
    for (int j = 0; j < m; j++) {
      matrix[j][0] = 0;
    }
  }

  cout << "Final matrix: " << endl;
  for (vector<int> v : matrix) {
    for (int num : v) {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}
