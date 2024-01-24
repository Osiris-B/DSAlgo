#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;

  // to init vector of fixed size
  vector<int> i(5, 1);
  // here 5 => size of vector, 1 => init value of elements

  cout << "size: " << v.capacity() << endl;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  // if max_cap = n, on adding (n+1)th element, max_cap = 2n
  cout << "size: " << v.capacity() << endl;

  cout << "element at 1st index: " << v.at(1) << endl;

  cout << "first element: " << v.front() << endl;
  cout << "last element: " << v.back() << endl;

  // if vector is cleared, size == 0, capacity != 0
  // since size => no. of elements present, capacity => memory allocated
  v.clear();
  cout << "size after clearing: " << v.size() << endl;
  cout << "capacity after clearing: " << v.capacity() << endl;

  return 0;
}
