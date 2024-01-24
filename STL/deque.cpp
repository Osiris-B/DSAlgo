#include <deque>
#include <iostream>
using namespace std;

int main() {
  deque<int> d;

  d.push_back(1);
  d.push_front(2);
  d.push_front(3);

  for (int i : d) {
    cout << i << " ";
  }
  cout << endl;

  d.pop_back();
  for (int i : d) {
    cout << i << " ";
  }
  cout << endl;

  cout << "first element: " << d.front() << endl;

  cout << "last element: " << d.back() << endl;

  return 0;
}
