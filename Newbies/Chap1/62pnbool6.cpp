#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << 1*(a-b==0)+1*(b-c==0)+1*(c-d==0)+1*(a-c==0)+1*(a-d==0)+1*(b-d==0);
}
