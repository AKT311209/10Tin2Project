#include <bits/stdc++.h>

using namespace std;

long long checkdiv3(string s) {
    long long n = s.size();
    long long res = 0;
    for (long long i = 0; i < n; i++) {
        res = (res * 10 + s[i] - '0') % 3;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string S;
    cin >> S;

    if (find(S.begin(), S.end(), '0') == S.end() || checkdiv3(S) != 0) {
        cout << -1;
        return 0;
    }

    int count[10] = {0};
    for(char ch : S) {
        count[ch - '0']++;
    }

    string sortS;
    for(int digit = 9; digit >= 0; digit--) {
        sortS += string(count[digit], '0' + digit);
    }

    cout << sortS;

    return 0;
}