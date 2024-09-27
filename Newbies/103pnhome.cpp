#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    int count=0;
    if (n>=5) {
        count+=(long long)ceil((long double)n/5);
        n%=5;
    } else if (n>=4)
    {
        count+=(long long)ceil((long double)n/4);
        n%=4;
    } else if (n>=3)
    {
        count+=(long long)ceil((long double)n/3);
        n%=3;
    }else if (n>=2)
    {
        count+=(long long)ceil((long double)n/2);
        n%=2;
    } else {
        count = 1;
    }
    cout << count;
    
}
