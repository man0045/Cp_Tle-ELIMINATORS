#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n, x;
  cin>>n>>x;
  vector<int> arr(n);
  for(int i = 0; i<n; i++){
   cin>>arr[i];
  }
  vector<int> vt;
  int k = 0;
  int maxi = INT_MIN;
  for(int i = 0; i<n; i++){
   maxi = max(maxi, arr[i]-k);
   k = arr[i];
  }
  maxi = max(maxi, 2*(x-k));
  cout<<maxi<<endl;
 }
 return 0;
}