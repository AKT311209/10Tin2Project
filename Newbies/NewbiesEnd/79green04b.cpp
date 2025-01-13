#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n < 6)
    {
        cout << "-1\n";
        return 0;
    }

    long long a = 1;
    long long b = 2;
    long long c = n - a - b;

    if (c <= b)
    {
        c = b + 1;
        a = n - b - c;
    }

    if (a > 0 && b > 0 && c > 0 && a != b && b != c && a != c)
    {
        vector<long long> nums = {a, b, c};
        sort(nums.begin(), nums.end());
        cout << nums[0] << " " << nums[1] << " " << nums[2] << "\n";
    }
    else
    {
        cout << "-1\n";
    }
    return 0;
}