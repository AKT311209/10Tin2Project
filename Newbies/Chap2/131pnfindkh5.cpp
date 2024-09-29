#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, m, d;
    cin >> n >> k >> m >> d;

    long long fullrows = n / m;
    long long speccols = n % m;                                                                                // Columns with n/m+1 numbers
    long long push = (fullrows + 1) * min(d - 1, speccols) + fullrows * max((d - speccols - 1), (long long)0); // push (d-0) forward
    k += push;
    k -= n * (k > n); // push back second half n if exceed n

    // 130
    if (fullrows == 0)
    { // not enough to fill 1 row, n<m
        cout << k;
    }
    else
    {
        // Find exact column of k
        long long colk = k - min((k / (fullrows + 1)), speccols); // adjust k after special rows back to right column
        colk = ceil((long double)colk / fullrows);                // find column of k

        // Find pos of first num (k) in colk
        long long posfirst = (fullrows + 1) * min(colk - 1, speccols) + fullrows * max((colk - speccols - 1), (long long)0) + 1;

        // Find k
        long long value = colk + (k - posfirst) * m;
        cout << value;
    }
}
