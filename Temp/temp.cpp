#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // 1. Declare variables
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    // 2. Calculate sum of all numbers
    long long sum = a + b + c + d;

    // 3. Take average of all numbers
    
    double avg = (double)sum / 4;

    // 4. Print average
    cout << fixed << setprecision(2) << avg << '\n';
    return 0;
} 
