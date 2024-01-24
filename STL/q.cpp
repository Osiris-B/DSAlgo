#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<string> q;

  q.push("gautam");
  q.push("menon");
  q.push("meh");

  cout << "first element: " << q.front() << endl;
  cout << "last element: " << q.back() << endl;

  cout << "size: " << q.size() << endl;

  q.pop();
  cout << "first after pop: " << q.front() << endl;
  cout << "last after pop: " << q.back() << endl;

  return 0;
}
