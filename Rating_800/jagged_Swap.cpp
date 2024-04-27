#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int k;
  cin>>k;
  vector<int> arr(k);
  for(int i = 0; i<k; i++){
   cin>>arr[i];
  }
  if(arr[0] != 1){
   cout<<"No"<<endl;
  }
  else{
   cout<<"Yes"<<endl;
  }

 }
}