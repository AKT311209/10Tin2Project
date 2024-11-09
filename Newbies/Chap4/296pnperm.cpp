#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long res = 1;
    for(int i = 1; i <= n; ++i)
        res *= i;
    return res;
}

int main() {
    string s;
    cin >> s;
    long long perm = factorial(s.length());

    for(int i = 0; i < s.length(); ) {
        char current = s[i];
        size_t first = s.find(current, 0);
        int count = 0;
        size_t pos = first;

        // Count all occurrences of the current character
        while(pos != string::npos) {
            count++;
            pos = s.find(current, pos + 1);
        }

        // Divide by factorial of the count
        perm /= factorial(count);

        // Move to the next unique character
        i = s.find_first_not_of(current, i);
        if(i == string::npos) break;
    }

    cout << perm;
}