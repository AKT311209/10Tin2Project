#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, T, K;
    cin >> A >> T >> K;

    int counts[60];
    for (int i = 0; i < 60; ++i)
    {
        string minute = to_string(i);
        if (minute.size() == 1)
            minute = "0" + minute;
        counts[i] = count(minute.begin(), minute.end(), '0' + K);
    }

    long long cycle_count = 0;
    for (int i = 0; i < 60; ++i)
    {
        cycle_count += counts[i];
    }

    long long full_cycles = T / 60;
    int rem = T % 60;

    long long total = full_cycles * cycle_count;

    for (int i = 0; i <= rem; ++i)
    {
        int curmin = (A + i) % 60;
        total += counts[curmin];
    }

    cout << total;
    return 0;
}