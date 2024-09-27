#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << min((b/2+1)*(b%2==1)+(b/2)*(b%2==0), (a/2+1)*(a%2==1)+(a/2)*(a%2==0));
}
