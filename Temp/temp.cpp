#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, cnt = 0;
    cin >> n;
    long long m = n + 2 * (n/2);
    for (int j = 1; j <= m; j++){
        if (j <= n/2 || j > m - n/2){
            cout << " ";
        }
        else
        {
            cout << '*';
        }
    }
    cout << "\n";
    for (int i = 1; i <= n/2; i++){
        for (int j = 1; j <= m; j++){
            if (j == n/2 - cnt || j == m - n/2 + 1 + cnt){
                cout << '*';
            }
            else
            {
                cout << " ";
            }
        }
        cnt++;
        cout << "\n";
    }
    cnt = 1;
    for (int i = 1; i <= n/2 - 1; i++){
        for (int j = 1; j <= m; j++){
            if (j == cnt + 1 || j == m - cnt){
                cout << '*';
            }
            else
            {
                cout << " ";
            }
        }
        cnt++;
        cout << "\n";
    }
    for (int j = 1; j <= m; j++){
        if (j <= n/2 || j > m - n/2){
            cout << " ";
        }
        else
        {
            cout << '*';
        }
    }
    return 0;
}
