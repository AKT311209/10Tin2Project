#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0;
    for (long long i = 1; i < sqrt(n); i++)
    {
        if (n%i == 0)
        {
            count++;
        }
    }
    cout << count;
}