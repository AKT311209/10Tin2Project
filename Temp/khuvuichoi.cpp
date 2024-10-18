#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("khuvuichoi.inp", "r")) {
        freopen("khuvuichoi.inp", "r", stdin);
        freopen("khuvuichoi.out", "w", stdout);
    }
    long long start, end;
    cin >> start >> end;

    long long hours = 0;
    long long price = 0;
    for (long long i = max(6LL, start); i < min(12LL, end); i++) {
        hours++;
        price += 6;
        if (hours > 4) {
            price -= 3;
        }
    }
    for (long long i = max(12LL, start); i < min(22LL, end); i++) {
        hours++;
        price += 10;
        if (hours > 4) {
            price -= 5;
        }
    }
    cout << price;
}