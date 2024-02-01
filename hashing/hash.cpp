#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,3,2,1,3};
    
    cout<<"Original array: "<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int hash[6] = {0};

    for(int i=0; i<5; i++){
        hash[arr[i]] += 1;
    }
    
    cout<<"Hash array:"<<endl;
    for(int i=0; i<6; i++){
        cout<<hash[i]<<" ";
    }
    cout<<endl;

    return 0;
}
