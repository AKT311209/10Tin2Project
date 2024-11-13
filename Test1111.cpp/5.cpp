#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x, y, m;
    cin >> n >> x >> y >> m;

    // (x, y) in the top left corner
    if ((x + y) <= (n + 1))
    {
        long long firstinrow = x * (x - 1) / 2 + 1;
        long long distance = (x + 1);
        long long pos = firstinrow + (y - 1) * distance + (y - 1) * (y - 2) / 2;
        cout << pos << '\n';
    }
    else
    {
        // (x, y) in the bottom right corner
        x = n - x + 1;
        y = n - y + 1;
        long long firstinrow = x * (x - 1) / 2 + 1;
        long long distance = (x + 1);
        long long pos = firstinrow + (y - 1) * distance + (y - 1) * (y - 2) / 2;
        cout << n * n + 1 - pos << '\n';
    }
    // n to (resx, resy)
    long long resx, resy;
    if (m<=n*(n+1)/2) {
        long long group = ceil((-1 + sqrt(1 + 8 * m)) / 2);
        long long firstingroup = group * (group - 1) / 2 + 1;
        long long distance = m-firstingroup;
        resx = group-distance;
        resy = 1+distance;
        cout << resx << ' ' << resy;
    } else {
        m = n*n+1-m;
        long long group = ceil((-1 + sqrt(1 + 8 * m)) / 2);
        long long firstingroup = group * (group - 1) / 2 + 1;
        long long distance = m-firstingroup;
        resx = group-distance;
        resy = 1+distance;
        cout << 1+n-resx << ' ' << 1+n-resy;
        
    }

}