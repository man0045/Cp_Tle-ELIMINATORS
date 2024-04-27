#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    int n = 5;
    int count = 0;
    vector<int> vt;
    int arr[] = {30, 15, 30};
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int maxi = INT_MIN;
            int mini = INT_MAX;
            for(int k = i; k <= j; k++) {
                vt.push_back(arr[k]);
                maxi = max(maxi, arr[k]);
                int p = vt.size();
                if(vt[0]==maxi and vt[p-1] == maxi) {
                    count += 1;
                }
            }
            vt.clear();
        }
    }
    cout << count;
    return 0;
}
