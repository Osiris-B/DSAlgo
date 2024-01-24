#include <iostream>
using namespace std;

void f(int i, int arr[], int n) {

  if (i >= n / 2) {
    return;
  }

  swap(arr[i], arr[n - i - 1]);

  f(i + 1, arr, n);
}

int main() {
  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  int arr[n];
  cout << "Enter array elements: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  f(0, arr, n);

  cout << "Reversed array: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}
