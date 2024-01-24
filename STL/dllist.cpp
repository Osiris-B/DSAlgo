#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> dl;

  dl.push_back(1);
  dl.push_front(2);

  for (int i : dl) {
    cout << i << " ";
  }
  cout << endl;

  dl.erase(dl.begin());
  for (int i : dl) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
