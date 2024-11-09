#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input, result;
    cin >> input;
    size_t i = 0;
    while (i < input.length())
    {
        if (i + 3 <= input.length())
        {
            int ascii = stoi(input.substr(i, 3));
            if (ascii >= 100 && ascii <= 122)
            { // 'd' to 'z'
                result += (char)ascii;
                i += 3;
                continue;
            }
        }
        if (i + 2 <= input.length())
        {
            int ascii = stoi(input.substr(i, 2));
            result += (char)ascii;
            i += 2;
        }
    }
    cout << result;
}