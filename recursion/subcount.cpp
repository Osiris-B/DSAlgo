#include <bits/stdc++.h>
using namespace std;

int subcount(int idx, int arr[], int s, int sum, int n) {
  if (idx == n) {
    if (s == sum) {
      return 1;
    }
    return 0;
  }

  s += arr[idx];

  int left = subcount(idx + 1, arr, s, sum, n);

  s -= arr[idx];

  int right = subcount(idx + 1, arr, s, sum, n);

  return left + right;
}

int main() {
  int n, sum;

  cout << "Enter the value of n: ";
  cin >> n;

  int arr[n];
  cout << "Enter the values of array: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Enter the value of sum: ";
  cin >> sum;

  cout << subcount(0, arr, 0, sum, n) << endl;

  return 0;
}
