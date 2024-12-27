#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long num_T, num_J;
    char char_T, char_J;
    cin >> num_T >> char_T >> num_J >> char_J;
    long long taken;
    cin >> taken;

    if (char_T == 'A')
    {
        cout << min(taken, num_T);
    }
    else
    {
        cout << max(0LL, taken - num_T);
    }
}