#include <bits/stdc++.h>

using namespace std;

int main() {
    long long L, R;
    cin >> L >> R;
    cout << R/10-((L-1)/10+1)+1-(L%10==0) - (R%10==0);
}