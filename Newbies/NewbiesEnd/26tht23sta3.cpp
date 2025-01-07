#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    long long countA, countB, countC;
    cin >> s;
    countA = count(s.begin(), s.end(), 'A');
    countB = count(s.begin(), s.end(), 'B');
    countC = count(s.begin(), s.end(), 'C');

    if (countA == countB || ((countA==0) + (countB==0) + (countC==0)) == 2) cout << "YES";
    else cout << "NO";
}