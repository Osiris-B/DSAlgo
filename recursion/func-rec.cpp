#include <iostream>
using namespace std;

int f(int n) {
  if (n == 0) {
    return 0;
  }
  return n + f(n - 1);
}

int main() {
  int n, sum;
  cout << "Enter the value of n: ";
  cin >> n;

  sum = f(n);
  cout << "Sum of 1 to n: " << sum << endl;
  return 0;
}
