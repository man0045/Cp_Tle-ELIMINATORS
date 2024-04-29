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
  string str = " ";
  int i = 0;
  int count = 0; 
  while(str.size() != str2.size()){
   str+=str1[i];
   count+=1;
   i++;
  }
  return count;
 }
}