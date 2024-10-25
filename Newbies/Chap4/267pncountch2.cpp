#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int countlower = 0, countupper = 0, countnumber = 0;
    cin >> s;
    for (size_t i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (islower(c))
        {
            countlower++;
        }
        else if (isupper(c))
        {
            countupper++;
        }
        else if (isdigit(c))
        {
            countnumber++;
        }
    }
    cout << countupper<< " " << countlower << " " << countnumber;
}