#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> k >> m;
    if (k % (m*2) > m || k % (m*2)==0) {
        // Find pos of the first num in cluster
        long long firstpos = (k/m-1*(k%m==0))*m+1;
        // Find the num at the first pos in the cluster
        long long firstnum = m*((firstpos-1)/m+1);
        // Case firstnum > m
        if (firstnum>n) firstnum = n;
        // Find k
        long long res = firstnum - (k-firstpos);
        cout << res;
    } else
    {
        cout << k;
    }
    
}
