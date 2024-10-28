#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x;
    string res;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x;
        if (x == 27)
            res += ' ';
        else {
            x-=26*(x>23);
            res += char((122+97)-(x+99));
        }
    }
    cout << res;
}