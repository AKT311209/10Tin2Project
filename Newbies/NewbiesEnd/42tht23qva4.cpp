#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N;
    cin >> N;

    long long prevrow = sqrt(N);
    long long currow = prevrow + 1;
    long long curcol;
    if (currow % 2 == 0) {
        curcol = N - prevrow*prevrow;
    }
    else {
        curcol = 2*currow - (N - prevrow*prevrow); 
    }
    cout << currow + curcol;   
}