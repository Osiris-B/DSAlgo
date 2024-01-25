#include <bits/stdc++.h>
using namespace std;

void print(int idx, vector<int> &v, int arr[], int n) {
  if (idx == n) {
    for (int i : v) {
      cout << i << " ";
    }
    cout << endl;
    return;
  }
  print(idx + 1, v, arr, n);
  v.push_back(arr[idx]);

  print(idx + 1, v, arr, n);
  v.pop_back();
}

int main() {
  int n;
  cout << "Enter the value of n: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements of array: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  vector<int> v;

  print(0, v, arr, n);
  return 0;
}
