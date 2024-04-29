#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int a, b;
  cin>>a>>b;
  vector<int>arr(a);
  for(int i = 0; i<a; i++){
   cin>>arr[i];
  }
  int cnt = 0;
  for(int i = 0; i<a; i++){
   if(arr[i] == b){
    cnt+=1;
   }
  }
  if(cnt > 0){
   cout<<"Yes"<<endl;
  }
  else{
   cout<<"No"<<endl;
  }
 }
 return 0;
}