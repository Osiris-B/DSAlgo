#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> s;

  s.insert(0);
  s.insert(0);
  s.insert(0);
  s.insert(5);
  s.insert(5);
  s.insert(2);

  for (int i : s) {
    cout << i << " ";
  }
  cout << endl;

  s.erase(s.begin());
  for (int i : s) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
