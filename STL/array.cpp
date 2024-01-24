#include <array>
#include <iostream>
using namespace std;
int main() {
  int basic[3] = {1, 2, 3};

  array<int, 3> b = {4, 5, 6};

  for (int i = 0; i < 3; i++) {
    cout << basic[i] << endl;
} 

  for (int i = 0; i < 3; i++) {
    cout << b[i] << endl;
  }

  cout << "first element: " << b.front() << endl;
  cout << "last element: " << b.back() << endl;

  return 0;
}
