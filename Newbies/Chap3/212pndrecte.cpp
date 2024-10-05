#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;
    for (long long i = 1; i <= n; i++)
    {
        cout << '*';
    }
    cout << '\n';
    for (long long i = 1; i <= m-2; i++)
    {
        cout << '*';
        for (long long j = 1; j <= n-2; j++)
        {
            cout << ' ';
        }
        if (n > 1) cout << '*';
        cout << '\n';
    }
    if (m > 1) {
        for (long long i = 1; i <= n; i++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}