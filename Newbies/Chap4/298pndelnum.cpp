#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int k;
    cin >> k >> s;

    string res = "0";
    k++;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (k == 0)
            {
                break;
            }
        if (res.back() < s[i])
        {
            res.back() = s[i];
            k--;m
        }
        else
        {
            res += s[i];
        }
    }
    // string add = s.substr(s.length()-res.length()-1);
    // res += add;
    cout << res;
}