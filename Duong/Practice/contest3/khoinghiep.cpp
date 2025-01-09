#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    vector <pair <long long, long long>> company;
    
    long long comp;
    cin >> comp;

    for (long long i = 0; i < comp; i++) {
        long long a, b;
        cin >> a >> b;
        company.push_back({a, b});
    }

    sort(company.begin(), company.end());
    long long total = 0;
    long long lev = 0;
    for (long long i = 0; i < comp; i++) {
        if (company[i].first > lev) {
            total += company[i].second;
        }
        lev++;
    }
    
    cout << total;
}