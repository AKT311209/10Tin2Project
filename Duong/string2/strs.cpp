#include <bits/stdc++.h>

using namespace std;

int main() {
    if (fopen("strs.inp", "r")) {
        freopen("strs.inp", "r", stdin);
        freopen("strs.out", "w", stdout);
    }
    string s, res;
    vector <int> num;
    cin >> s;
    bool flag = false;
    int pos = 0;
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') 
        {
            if (!flag) 
            {
                pos = i;
            }
            flag = true;
        }
        else if (flag) 
        {
            num.push_back(stoi(s.substr(pos, i - pos)));
            flag = false;
        }
    }
    if (flag) 
    {
        num.push_back(stoi(s.substr(pos)));
    }
    sort(num.begin(), num.end(), greater<int>());
    for (size_t i = 0; i < s.size(); i++) {
        if (!(s[i] >= '0' && s[i] <= '9')) {
            res += s[i];
        } else {
            res += to_string(num.back());
            num.pop_back();
            while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
                i++;
            }
            i--;
        }
    }
    cout << res;
}