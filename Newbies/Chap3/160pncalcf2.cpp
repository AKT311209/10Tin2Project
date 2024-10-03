#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    for (long long i = 1; i <= n; i++)
    {
        sum += 1 / (double)(i*i*i);
    }
    cout << fixed << setprecision(5) << sum;
}