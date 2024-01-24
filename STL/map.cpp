#include <iostream>
#include <map>
using namespace std;

// map :=  RB trees ~> O(logn); unordered map := hash table ~> O(1)
int main() {
  map<int, string> m;

  m[1] = "gautam";
  m[2] = "menon";
  m[13] = "me";

  m.insert({5, "world"});

  map<int, string>::iterator it = m.begin();
  for (; it != m.end(); it++) {
    cout << "Key: " << it->first << " Value: " << it->second << endl;
  }

  cout << "13 present? :" << m.count(13) << endl;
  return 0;
}
