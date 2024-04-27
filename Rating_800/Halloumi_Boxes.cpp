#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int> arr, int n){
 for(int i = 1; i<n; i++){
  if(arr[i] >= arr[i-1]){
   return true;
  }
  else{
   return false;
  }
 }
}
int main(){
 int t;
 cin>>t;
 while(t--){
  int a, b;
  cin>>a>>b;
  vector<int> arr(a);
  for(int i = 0; i<a; i++){
   cin>>arr[i];
  }
  if(sorted(arr, a)){
   cout<<"Yes"<<endl;
  }
  else if(b>=2){
   cout<<"Yes"<<endl;
  }
  else{
   cout<<"No"<<endl;
  }
 }
}