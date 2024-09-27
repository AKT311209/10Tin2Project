#include <iostream>

using namespace std;

int main() {
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    long long odd, even;
    even = odd =0;
    
    even += a*(a%2==0)+b*(b%2==0)+c*(c%2==0)+d*(d%2==0)+e*(e%2==0);
    odd = (a+b+c+d+e)-even;

    cout << abs(even-odd);
}
