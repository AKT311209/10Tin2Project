#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    long long temp;
    vector<long long> a;

    auto start_time = high_resolution_clock::now();
    cin >> n >> k;
    a.resize(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> temp;
        temp -= k;
        a[i] = temp;
    }

    long long max_len = 0;
    long long start = 0;
    long long end = 0;

    for (long long i = 0; i < n; i++)
    {
        long long sum = 0;
        for (long long j = i; j < n; j++)
        {
            sum += a[j];
            if (sum == 0)
            {
                if (j - i + 1 > max_len)
                {
                    max_len = j - i + 1;
                    start = i + 1;
                    end = j + 1;
                }
            }
        }
    }

    auto end_time = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end_time - start_time);

    if (max_len == 0)
    {
        cout << "0";
    }
    else
    {
        cout << start << " " << max_len;
    }

    cout << "\nExecution time: " << duration.count() << " microseconds" << endl;

    return 0;
}