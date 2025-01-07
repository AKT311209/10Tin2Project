#include <bits/stdc++.h>

using namespace std;
vector<long long> v;

int main() {
    long long n;
    cin >> n;

    long long dig = log10(n) + 1;
    v.push_back(0);
    v.push_back(45);
    for (int i = 2; i < dig; i++) {
        v.push_back(v[i - 1] * 10 + 45 * pow(10, i - 1));
    }

    long long ans = 0;
    ans+=v.back();
    

    cout << ans;
}