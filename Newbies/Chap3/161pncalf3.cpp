#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    for (long long i = 2; i <= 2*n; i+=2)
    {
        sum += (i-1) / (double)i;
    }
    cout << fixed << setprecision(5) << sum;
}