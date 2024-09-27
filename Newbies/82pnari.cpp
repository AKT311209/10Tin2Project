#include <bits/stdc++.h>

using namespace std;


int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    if (b-a==c-b) {
        cout << c+(c-b);
    } else if ((double)b/a==(double(c/b))) {
        cout << c*(c/b);
    } else {
        cout << -1;
    }
}
