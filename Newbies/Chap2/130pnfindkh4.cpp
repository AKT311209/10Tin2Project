#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, m;
    cin >> n >> k >> m;

    long long fullrows = n / m;
    long long speccols = n % m; // Columns with n/m+1 numbers

    if (fullrows == 0)
    { // not enough to fill 1 row, n<m
        cout << k;
    }
    else
    {
            // Find exact column of k
        long long colk = k - min((k / (fullrows+1)), speccols); // adjust k after special rows back to right column
        colk = ceil((long double)colk/fullrows); // find column of k

        // Find pos of first num (k) in colk
        long long posfirst = (fullrows + 1) * min(colk - 1, speccols) + fullrows * max((colk - speccols - 1), (long long)0) + 1;

        // Find k
        long long value = colk + (k - posfirst) * m;
        cout << value;
    }
}
