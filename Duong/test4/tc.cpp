#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("tc.inp", "r"))
    {
        freopen("tc.inp", "r", stdin);
        freopen("tc.out", "w", stdout);
    }

    long long n;
    cin >> n;
    vector<long long> a(n + 1);
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    bool flag = true;
    for (long long i = 1; i <= n; i++) {
        if (a[i]<a[i+1] && (i%2==flag)) {
            flag = !flag;
            a[i] = LLONG_MAX;
        }
    }

    vector <long long> res;
    for (long long i = 1; i <= n; i++) {
        if (a[i] != LLONG_MAX) {
            res.push_back(a[i]);
        }
    }

    long long sum = 0;
    for (long long i = 0; i < res.size(); i++) {
        if (i%2==0) sum+=res[i];
        else sum -=res[i];
    }
    if (res.size()%2==0) sum+=res.back();
    cout << sum;
        
}