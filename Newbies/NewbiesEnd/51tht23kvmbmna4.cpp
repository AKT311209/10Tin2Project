#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    if (N < 1)
    {
        cout << 0;
        return 0;
    }
    int digits = 0;
    long long temp = N;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }
    long long total = 0;
    for (int len = 1; len <= digits; ++len)
    {
        int half = (len + 1) / 2;
        long long start = pow(10, half - 1);
        long long end = pow(10, half);
        for (long long i = start; i < end; ++i)
        {
            string s = to_string(i);
            string rev = s.substr(0, len % 2 == 0 ? s.size() : s.size() - 1);
            reverse(rev.begin(), rev.end());
            string palindrome = s + rev;
            long long palNumber = stoll(palindrome);
            if (palNumber > N) {
                break;
            }
            bool valid = true;
            for (int j = 1; j < s.size(); ++j)
            {
                if (s[j] <= s[j - 1])
                {
                    valid = false;
                    break;
                }
            }
            if (valid)
            {
                total++;
            }
        }
    }
    cout << total;
}