#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int a, b;
  cin>>a>>b;
  string str1;
  string str2;
  cin>>str1;
  cin>>str2;
  bool found = false;
  for(int i = 0; i<6; i++){
      if(str1.find(str2) != string::npos){
          cout<<i<<endl;
          found = true;
          break;
      }
      str1+=str1;
  }
  if(!found){
      cout<<-1<<endl;
  }
 }
 return 0;
}