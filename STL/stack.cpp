#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<string> st;

  st.push("gautam");
  st.push("menon");

  cout << "top element: " << st.top() << endl;

  st.pop();
  cout << "stack top post pop:  " << st.top() << endl;

  cout << "size of stack: " << st.size() << endl;

  return 0;
}
