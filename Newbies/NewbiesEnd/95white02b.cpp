#include <bits/stdc++.h>

using namespace std;

long long countLeap(long long l, long long r) {
    long long count = 0;
    if (l % 4 == 0) {
        count++;
    }
    count += ((r-1) / 4) - (l / 4);
    count -= ((r-1) / 100) - (l / 100);
    count += ((r-1) / 400) - (l / 400);
    return count;
}

int main() {
    long long x, y, k;
    cin >> x >> y >> k;
    long long leap = countLeap(x, y);
    k -= 2;
    k+=1*(y-x)%7;
    k+=leap%7;
    k%=7;
    k+=2;
    k+=7*(k<=1);
    k-=7*(k>=9);
    cout << k << '\n';
}
