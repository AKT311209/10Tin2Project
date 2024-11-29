#include <bits/stdc++.h>

using namespace std;

bool comparenum(string s, string compare)
{
    // Remove leading zeros
    string result = "";
    bool leading0 = true;
    for (char c : s)
    {
        if (c != '0')
        {
            leading0 = false;
        }
        if (!leading0)
        {
            result += c;
        }
    }
    s = result;
    if (s.size() != compare.size())
    {
        return s.size() > compare.size();
    }
    return lexicographical_compare(compare.begin(), compare.end(), s.begin(), s.end());
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("gs.inp", "r")) {
        freopen("gs.inp", "r", stdin);
        freopen("gs.out", "w", stdout);
    }

    long long max = -1;
    long long secondmax = -1;
    long long thirdmax = -1;

    long long repeats;
    cin >> repeats;
    for (long long i = 0; i < repeats; i++) {
        long long n;
        cin >> n;
        if (n >= max) {
            thirdmax = secondmax;
            secondmax = max;
            max = n;
        } else if (n >= secondmax) {
            thirdmax = secondmax;
            secondmax = n;
        } else if (n >= thirdmax) {
            thirdmax = n;
        }
    }
    
    string maxstr = to_string(max);
    string secondmaxstr = to_string(secondmax);
    string thirdmaxstr = to_string(thirdmax);

    string r1 = maxstr + secondmaxstr + thirdmaxstr;
    string r2 = maxstr + thirdmaxstr + secondmaxstr;
    string r3 = secondmaxstr + maxstr + thirdmaxstr;
    string r4 = secondmaxstr + thirdmaxstr + maxstr;
    string r5 = thirdmaxstr + maxstr + secondmaxstr;
    string r6 = thirdmaxstr + secondmaxstr + maxstr;

    string result = r1;
    if (comparenum(r2, result)) {
        result = r2;
    }
    if (comparenum(r3, result)) {
        result = r3;
    }
    if (comparenum(r4, result)) {
        result = r4;
    }
    if (comparenum(r5, result)) {
        result = r5;
    }
    if (comparenum(r6, result)) {
        result = r6;
    }

    cout << result;
}