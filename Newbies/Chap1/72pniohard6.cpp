#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, m, n;
    cin >> m >> n >> a >> b;
    cout << min(a, min(b, min(m-a+1, n-b+1)));

}
