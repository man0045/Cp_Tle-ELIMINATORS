#include <bits/stdc++.h>
using namespace std;
int main()
{

 int n;
 cin >> n;
 int arr[n];
 vector<int> vt;
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 for (int i = 0; i < n; i++)
 {
  vt.push_back(abs(arr[i]));
 }
 int mini = INT_MAX;
 for (int i = 0; i < n; i++)
 {
  mini = min(mini, vt[i]);
 }
 cout << mini << endl;
}