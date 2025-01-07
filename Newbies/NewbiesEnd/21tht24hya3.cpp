#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int cycles = N / 1440;
    int remainder = N % 1440;
    int count = cycles * 3;
    if (remainder >= 1) count += 1;
    if (remainder >= 672) count += 1;
    if (remainder >= 1343) count += 1;
    cout << count;
}