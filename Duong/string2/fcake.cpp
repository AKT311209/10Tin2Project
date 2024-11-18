#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("fcake.inp", "r"))
    {
        freopen("fcake.inp", "r", stdin);
        freopen("fcake.out", "w", stdout);
    }
    int repeats;
    cin >> repeats;
    string input;
    long long k;
    for (size_t i = 0; i < repeats; i++)
    {

        cin >> input >> k;
        int count = 0;
        for (size_t i = 0; i < input.size(); i++)
        {
            if (input[i] == '-') {
                if (i + k > input.size()) {
                    break;
                }
                count++;
                for (size_t j = 0; j < k; j++)
                {
                    if (input[i + j] == '-')
                    {
                        input[i + j] = '+';
                    }
                    else
                    {
                        input[i + j] = '-';
                    }
                }
            }
        }
        for (size_t i = 0; i < input.size(); i++)
        {
            if (input[i] == '-')
            {
                cout << "IMPOSSIBLE" << '\n';
                break;
            }
            if (i == input.size() - 1)
            {
                cout << count << '\n';
            }
        }
    }
}