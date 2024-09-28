#include <bits/stdc++.h>

using namespace std;


int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    if (a+b>c && c+a>b && b+c>a){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
