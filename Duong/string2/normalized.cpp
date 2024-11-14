#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("normalized.inp", "r"))
    {
        freopen("normalized.inp", "r", stdin);
        freopen("normalized.out", "w", stdout);
    }
    string input;
    vector<string> s;
    while (cin >> input)
    {
        s.push_back(input);
    }

    string lname = s[s.size() - 2];
    lname[0] = toupper(lname[0]);
    for (size_t i = 1; i < lname.size(); i++)
    {
        lname[i] = tolower(lname[i]);
    }

    string fname = s[0];
    fname[0] = toupper(fname[0]);
    for (size_t i = 1; i < fname.size(); i++)
    {
        fname[i] = tolower(fname[i]);
    }

    string mname = "";
    for (size_t i = 1; i < s.size() - 2; i++)
    {
        mname += s[i];
        mname += " ";
    }
    for (size_t i = 1; i < mname.size(); i++)
    {
        if (mname[i - 1] == ' ')
        {
            mname[i] = toupper(mname[i]);
        }
        else
        {
            mname[i] = tolower(mname[i]);
        }
    }
    mname[0] = toupper(mname[0]);

    string amount = s[s.size() - 1];

    cout << lname << '\n';
    cout << fname << '\n';
    cout << mname << '\n';
    cout << amount;
}