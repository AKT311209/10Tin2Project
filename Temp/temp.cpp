#include <bits/stdc++.h>

using namespace std;

long long numcube(long long left, long long right) {
    if (left > right) return 0;
    left = abs(left);
    right = abs(right);
    if (left > right) swap(left, right);
    // Finding cube number >= left
    long long c1 = ceil(cbrt(left));
    // Finding cube number <= right
    long long c2 = cbrt(right);
    // Return the number of cube numbers in the range [left, right]
    return c2 - c1+1;
}

int main()
{
    long long l, r, k;
    cin >> l >> r >> k;
    long long res;
    // k is digits of the number
    // l is the lower bound
    // r is the upper bound

    // Limit l and r to k digits
    if (l == 0) {
        if (k==1) l = 0;
        else if (r>0) l = (long long)max((double)l, pow(10, k - 1));
        else l = (long long)max((double)l, -pow(10, k) + 1);
    } else if (l < 0) {
        l = (long long)max((double)l, -pow(10, k) + 1);
    } else {
        l = (long long)max((double)l, pow(10, k - 1));
    }

    if (r ==0) {
        if (k==1) r = 0;
        else if (l<0) r = (long long)min((double)r, -pow(10, k - 1));
        else r = (long long)min((double)r, pow(10, k) - 1);
    } else if (r<0) {
        r = (long long)min((double)r, -pow(10, k - 1));
    } else {
        r = (long long)min((double)r, pow(10, k) - 1);
    }

    if (l < 0 && r > 0) {
        // 2 ranges
        long long l1 = l, r1 = -pow(10, k-1);
        long long r2 = r, l2 = pow(10, k-1);
        res = numcube(l1, r1) + numcube(l2, r2);
    } else {
        res = numcube(l, r);
    }
    res += (k==1 && l < 0 && r > 0);
    cout << res << '\n';
    return 0;
}
