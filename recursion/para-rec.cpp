#include <iostream>
using namespace std;

int f(int i, int sum) {
  if (i < 1) {
    cout << sum << endl;
    return 0;
  }
  f(i - 1, sum + i);
  return 0;
}

int main() {
  int n;
  cout << "Enter the value of n: ";
  cin >> n;

  f(n, 0);

  return 0;
}
