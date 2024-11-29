#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

const int MAX = 10000000;
vector<int> check;
vector<int> b(MAX + 1, 0);

void sangNT(int a) {
    vector<bool> xet(a + 1, true);
    xet[0] = xet[1] = false;
    for (int i = 2; i * i <= a; i++) {
        if (xet[i]) {
            for (int j = i * i; j <= a; j += i) {
                xet[j] = false;
            }
        }
    }
    for (int i = 2; i <= a; i++) {
        if (xet[i]) {
            check.push_back(i);
        }
    }
}
void dem(vector<int> x) {
    for (int a : x) {
        for (int p : check) {
            if (p * p > a)
                break;
            if (a % p == 0) {
                b[p]++;
                while (a % p == 0)
                    a /= p;
            }
        }
        if (a > 1)
            b[a]++;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    auto start = high_resolution_clock::now();

    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    int m;
    cin >> m;
    vector<pair<int, int>> xet(m);
    for (int i = 0; i < m; ++i) {
        cin >> xet[i].first >> xet[i].second;
    }
    int p = *max_element(x.begin(), x.end());
    int nhat = max(p, 2*MAX);
    sangNT(nhat);
    dem(x);

    for (const auto& g : xet) {
        int l = g.first;
        int r = g.second;
        int ketqua = 0;
        for (int p : check) {
            if (p > r)
                break;
            if (p >= l) {
                ketqua += b[p];
            }
        }
        cout << ketqua << '\n';
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    cout << "Execution time: " << duration.count() << " ms" << endl;

    return 0;
}