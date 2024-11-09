#include <bits/stdc++.h>

using namespace std;

int main() {
    string base, target;
    cin >> base >> target;
    int count = 0;
    // Count the number of occurences of target in base
    size_t found = base.find(target);
    while (found != string::npos) {
        count++;
        found = base.find(target, found+1);
    }
    cout << count;
}