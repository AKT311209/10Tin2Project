#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("dist.inp", "r")) {
        freopen("dist.inp", "r", stdin);
        freopen("dist.out", "w", stdout);
    }
    int m, n;
    cin >> m >> n;
    vector<vector<char>> input(m + 1, vector<char>(n + 1));
    string in;
    for (int i = 1; i <= m; i++) {
        cin >> in;
        for (int j = 1; j <= n; j++) {
            input[i][j] = in[j - 1];
        }
    }
    array<int, 26> posx;
    array<int, 26> posy;
    array<int, 26> dist;
    posx.fill(-1);
    posy.fill(-1);
    dist.fill(INT_MAX);
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            int idx = input[i][j] - 'a';
            if (posx[idx] == -1) {
                posx[idx] = i;
                posy[idx] = j;
            } else {
                int current_dist = abs(i - posx[idx]) + abs(j - posy[idx]);
                dist[idx] = min(dist[idx], current_dist);
                posx[idx] = i;
                posy[idx] = j;
            }
        }
    }
    int min_dist = INT_MAX;
    for (int i = 0; i < 26; i++) {
        if (dist[i] != INT_MAX) {
            min_dist = min(min_dist, dist[i]);
        }
    }
    cout << min_dist;
    return 0;
}