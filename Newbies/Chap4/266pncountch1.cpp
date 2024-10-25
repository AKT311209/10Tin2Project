#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int counta = 0, countb = 0, countc = 0;
    cin >> s;
    for (size_t i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c == 'a')
        {
            counta++;
        }
        else if (c == 'b')
        {
            countb++;
        }
        else if (c == 'c')
        {
            countc++;
        }
    }
    cout << counta << " " << countb << " " << countc << ' ' << s.size() - counta - countb - countc;  
}