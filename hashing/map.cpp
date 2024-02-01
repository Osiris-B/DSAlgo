#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 1, 2, 3, 2};

  map<int, int> mp;

  cout<<"Original array: "<<endl;
  for (int i = 0; i < 7; i++) {
      cout<<arr[i]<<" ";
  }
  cout<<endl;

  cout<<"Hash map: "<<endl;
  for(int i=0; i<8 ; i++){
      mp[arr[i]] += 1;
  }

  for(int i=0; i<8; i++){
      cout<<mp[i]<<" ";
  }
  cout<<endl;

  return 0;
}
