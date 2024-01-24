#include <iostream>
using namespace std;

void f(int left, int right, int arr[]) {
  if (left >= right) {
    return;
  }

  swap(arr[left], arr[right]);

  f(left + 1, right - 1, arr);
}

int main() {
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];

  cout << "Enter array elements: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  f(0, n - 1, arr);
  
  cout<<"Reversed array: "<<endl;
  for (int i : arr) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
