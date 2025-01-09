#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    if (find(N.begin(), N.end(), '0') == N.end() && find(N.begin(), N.end(), '5') == N.end()) {
        cout << "NO";
        return 0;
    }
    
    if (N.find_last_of('5') != string::npos) {
        swap(N[N.find_last_of('5')], N.back());
    } else {
        swap(N[N.find_last_of('0')], N.back());
    }
    sort(N.begin(), N.end()-1);

    for (int i = 0; i < N.size(); i++) {
        if (N[i] != '0') {
            swap(N[i], N[0]);
            break;
        }
    }

    cout << N;
}