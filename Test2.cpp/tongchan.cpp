#include <bits/stdc++.h>

using namespace std;


int main() {
    if (fopen("tongchan.inp", "r"))
    {
        freopen("tongchan.inp", "r", stdin);
        freopen("tongchan.out", "w", stdout);
    }
    long long repeats, n;
    cin >> repeats;
    long long sum;
    vector <long long> even;
    vector <long long> odd;
    for (long long i = 0; i< repeats; i++) {
        cin >> n;
        if (n%2==0) {
            even.push_back(n);
        } else {
            odd.push_back(n);
        }
        sum +=n;
    }
    long long odds = odd.size();
    long long evens = even.size();
    if (sum%2==0) {
        cout << evens*(evens-1)/2 + odds*(odds-1)/2;
    } else {
        cout << evens * odds;
    }

}