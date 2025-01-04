#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    long long sum = 0;
    int num = 3;
    bool one = true;
    while (num < B){
        if (num > A){
            sum += num;
        }
        if (one){
            num += 1;
        }
        else{
            num += 2;
        }
        one = !one;
    }
    cout << sum;
}