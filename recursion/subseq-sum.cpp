#include <bits/stdc++.h>
using namespace std;

void subsum(int idx, vector<int> &v, int arr[], int s, int sum, int n) {
  if (idx == n) {
    if (s == sum) {
      for (int i : v) {
        cout << i << " ";
      }
      cout << endl;
    }
    return;
  }

  v.push_back(arr[idx]);
  s += arr[idx];

  subsum(idx + 1, v, arr, s, sum, n);

  s -= arr[idx];
  v.pop_back();

  subsum(idx + 1, v, arr, s, sum, n);
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

  vector<int> v;
  subsum(0, v, arr, 0, sum, n);

  return 0;
}
