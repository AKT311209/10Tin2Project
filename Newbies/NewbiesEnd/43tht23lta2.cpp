#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a;
    cin >> a;
    
    long long a_cm = a * 10;
    long long p = 4 * a_cm;
    int count = p / 5;
    
    cout << count;
    
    return 0;
}