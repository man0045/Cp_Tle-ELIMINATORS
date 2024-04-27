#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    //     if (n == 2) {
    //         cout << "Yes" << endl;
    //     }
    //     else {


    //         int cnt = 0;
    //         for (int i = 0; i < n - 2; i++) {
    //             if (arr[i] + arr[i + 1] == arr[i + 1] + arr[i + 2]) {
    //                 cnt += 1;
    //             }
    //         }
    //         if (cnt == n - 2) {
    //             cout << "Yes" << endl;
    //         }
    //         else {
    //             cout << "No" << endl;
    //         }
    //     }
    // 

        unordered_map<int, int> mp;
        bool yes = true;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;

            if(mp.size() > 2){
                yes = false;
                break;
            }
        }
        if(mp.size() == 2){
            int f1 = begin(mp)->second;
            if(f1!= n/2 && f1 != (n+1)/2){
                yes = false;
            }
        }
        if(yes){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
