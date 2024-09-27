#include <iostream>

using namespace std;

int main() {
    long long x;
    cin >> x;

    long long line1, line2, line3, line4;

    line1 = x*(x%2==0)+(x-1)*(x%2==1);
    line2 = x*(x%2==0)+(x+1)*(x%2==1);
    line3 = (x-2)*(x%2==1)+(x-1)*(x%2==0);
    line4 = (x+2)*(x%2==1)+(x+1)*(x%2==0);

    cout << line1 << '\n';
    cout << line2 << '\n';
    cout << line3 << '\n';
    cout << line4 << '\n';
}
