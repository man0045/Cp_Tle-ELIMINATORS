#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string arr[10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> arr[i][j];
            }
        }
        int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (((arr[i][j] == 'X' && j == 0) || (arr[i][j] == 'X' && j == 9) )or ((arr[i][j] == 'X' && i == 0) || (arr[i][j] == 'X' && i == 9))) {
                    cnt1 += 1;
                }
                if (((arr[i][j] == 'X' && j == 1) || (arr[i][j] == 'X' && j == 8)) or ((arr[i][j] == 'X' && i == 1) || (arr[i][j] == 'X' && i == 8))) {
                    cnt2 += 2;
                }
                if (((arr[i][j] == 'X' && j == 2) || (arr[i][j] == 'X' && j == 7)) or ((arr[i][j] == 'X' && i == 2) || (arr[i][j] == 'X' && i == 7))) {
                    cnt3 += 3;
                }
                if (((arr[i][j] == 'X' && j == 3) || (arr[i][j] == 'X' && j == 6)) or ((arr[i][j] == 'X' && i == 3) || (arr[i][j] == 'X' && i == 6))) {
                    cnt4 += 4;
                }
                if (((arr[i][j] == 'X' && j == 4) || (arr[i][j] == 'X' && j == 5)) or ((arr[i][j] == 'X' && i == 4) || (arr[i][j] == 'X' && i == 5))) {
                    cnt5 += 5;
                }
            }
        }
        int k = cnt1 + cnt2 + cnt3 + cnt4 +cnt5;
        cout << k << endl;
    }
    return 0;
}
