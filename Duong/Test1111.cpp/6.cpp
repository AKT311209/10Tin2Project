#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long center = (n + 1) / 2;
    long long centertopx = (center + 1) / 2;
    long long centertopy = center;
    long long centerbottomx = (center + n) / 2;
    long long centerbottomy = center;
    long long centerleftx = center;
    long long centerlefty = (center + 1) / 2;
    long long centerrightx = center;
    long long centerrighty = (center + n) / 2;
    for (long long p = 1; p <= n; p++)
    {
        for (long long q = 1; q <= n; q++)
        {
            long long i = p;
            long long j = q;
            if (((i == j || i + j == n + 1) || (abs(i - center) + abs(j - center)) == n / 2) || ((abs(i - centertopx) + abs(j - centertopy)) % 3 == 0 && (abs(i - centertopx) + abs(j - centertopy)) <= n / 4) || ((abs(i - centerbottomx) + abs(j - centerbottomy)) % 3 == 0 && (abs(i - centerbottomx) + abs(j - centerbottomy)) <= n / 4) || ((abs(i - centerleftx) + abs(j - centerlefty)) % 3 == 0 && (abs(i - centerleftx) + abs(j - centerlefty)) <= n / 4) || ((abs(i - centerrightx) + abs(j - centerrighty)) % 3 == 0 && (abs(i - centerrightx) + abs(j - centerrighty)) <= n / 4))
            {
                cout << "◼";
            }
            else
            {
                cout << "◻";
            }
        }
        cout << '\n';
    }
}