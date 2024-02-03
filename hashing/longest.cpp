#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> nums = {100, 4, 200, 1, 3, 2};
  unordered_set<int> hash;

  cout << "Input: " << endl;
  for (int n : nums) {
    cout << n << " ";
  }
  cout << endl;
  for (int n : nums) {
    hash.insert(n);
  }
  int ans = 0;

  for (int n : nums) {
    if (hash.find(n - 1) == hash.end()) {
      int cnum = n;
      int clen = 1;
      while (hash.find(cnum + 1) != hash.end()) {
        cnum++;
        clen++;
      }
      ans = max(ans, clen);
    }
  }

  cout << "Longest sequence: " << ans << endl;

  return 0;
}
