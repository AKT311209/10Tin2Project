#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, q, b;
    cin >> n >> q >> b;
    vector<long long> array(n + 2, b);

    for (long long i = 0; i < q; i++) {
        long long ri, pi;
        cin >> ri >> pi;
        while (pi > 0) {
            long long min = *min_element(array.begin() + 1, array.begin() + ri + 1);
            array[find(array.begin() + 1, array.begin() + ri + 1, min) - array.begin()]++;
            pi--;
        }
    }
    
    for (long long i = 1; i <= n; i++) {
        cout << array[i] << " ";
    }
}