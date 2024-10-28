#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input, res;
    getline(cin, input);
    for (size_t i = 0; i < input.size(); i++)
    {
        if (input[i] == ' ')
        {
            res += ' ';
        }
        else
        {
            res += char(input[i]-3+26*(input[i]<'d'));
        }
    }
    cout << res;
}