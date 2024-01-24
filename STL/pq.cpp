#include <iostream>
#include <queue>
using namespace std;

int main() {
  // max heap
  priority_queue<int> maxh;

  // min heap
  priority_queue<int, vector<int>, greater<int>> minh;

  maxh.push(1);
  maxh.push(2);
  maxh.push(3);
  maxh.push(4);

  int nmax = maxh.size();
  for (int i = 0; i < nmax; i++) {
    cout << maxh.top() << " ";
    maxh.pop();
  }
  cout << endl;

  minh.push(1);
  minh.push(2);
  minh.push(3);
  minh.push(4);

  int nmin = minh.size();
  for (int i = 0; i < nmin; i++) {
    cout << minh.top() << " ";
    minh.pop();
  }
  cout << endl;

  cout << "maxheap empty: " << maxh.empty() << endl;
  return 0;
}
