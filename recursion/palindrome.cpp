#include <iostream>
using namespace std;

bool chk_pal(int i, string &s) {
  int n = s.size();
  if (i >= n / 2) {
    return true;
  }
  if (s[i] != s[n - i - 1]) {
    return false;
  }
  return chk_pal(i + 1, s);
}

int main() {
  string s;
  cout << "Enter string: ";
  cin >> s;

  cout << "Is palindrome? " << chk_pal(0, s) << endl;

  return 0;
}
