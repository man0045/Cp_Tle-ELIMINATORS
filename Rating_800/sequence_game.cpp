#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  ll n;
  cin>>n;
   vector<ll>v(n), res;
  for(ll i = 0; i<n; i++){
   cin>>v[i];
  }
 
  res.push_back(v[0]);
  for(ll i = 1; i<n; i++){
   if(v[i-1] > v[i]){
    res.push_back(v[i]);
    res.push_back(v[i]);
   }
   else{
    res.push_back(v[i]);
   }
  }
  cout<<(ll)res.size()<<endl;
  for(ll i = 0; i<(ll)res.size(); i++){
   cout<<res[i]<<" ";
  }
 }
}