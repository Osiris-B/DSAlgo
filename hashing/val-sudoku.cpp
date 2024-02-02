#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>> &board) {
  const int cnt = 9;

  bool row[cnt][cnt] = {false};
  bool col[cnt][cnt] = {false};
  bool smat[cnt][cnt] = {false};

  for (int r = 0; r < cnt; r++) {
    for (int c = 0; c < cnt; c++) {
      if (board[r][c] == '.') {
        continue;
      }
      int idx = board[r][c] - '0' - 1;
      int area = (r / 3) * 3 + (c / 3);

      if (row[r][idx] || col[c][idx] || smat[area][idx]) {
        return false;
      }

      row[r][idx] = true;
      col[c][idx] = true;
      smat[area][idx] = true;
    }
  }
  return true;
}
int main() {
  vector<vector<char>> board = [
    [ "5", "3", ".", ".", "7", ".", ".", ".", "." ],
    [ "6", ".", ".", "1", "9", "5", ".", ".", "." ],
    [ ".", "9", "8", ".", ".", ".", ".", "6", "." ],
    [ "8", ".", ".", ".", "6", ".", ".", ".", "3" ],
    [ "4", ".", ".", "8", ".", "3", ".", ".", "1" ],
    [ "7", ".", ".", ".", "2", ".", ".", ".", "6" ],
    [ ".", "6", ".", ".", ".", ".", "2", "8", "." ],
    [ ".", ".", ".", "4", "1", "9", ".", ".", "5" ],
    [ ".", ".", ".", ".", "8", ".", ".", "7", "9" ]
  ];

  cout << "Is the sudoku valid? " << endl;
  cout << isValidSudoku(board) << endl;

  return 0;
}
