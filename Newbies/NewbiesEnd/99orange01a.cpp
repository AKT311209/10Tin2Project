#include <bits/stdc++.h>

using namespace std;

bool checkpalin(string s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long query;
    cin >> query;

    while (query--)
    {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        // check if s1 + s2 is a palindrome
        string check1 = s1 + s2;
        string check2 = s2 + s1;
        string temp1 = s1;
        reverse(temp1.begin(), temp1.end());
        string temp2 = s2;
        reverse(temp2.begin(), temp2.end());
        string check3 = temp1 + s2;
        string check4 = s1 + temp2;
        // check if s2 + s3 is a palindrome
        string check5 = s2 + s3;
        string check6 = s3 + s2;
        string temp3 = s2;
        reverse(temp3.begin(), temp3.end());
        string temp4 = s3;
        reverse(temp4.begin(), temp4.end());
        string check7 = temp3 + s3;
        string check8 = s2 + temp4;
        // check if s1 + s3 is a palindrome
        string check9 = s1 + s3;
        string check10 = s3 + s1;
        string temp5 = s1;
        reverse(temp5.begin(), temp5.end());
        string temp6 = s3;
        reverse(temp6.begin(), temp6.end());
        string check11 = temp5 + s3;
        string check12 = s1 + temp6;
        if (checkpalin(check1) || checkpalin(check2) || checkpalin(check3) || checkpalin(check4) || checkpalin(check5) || checkpalin(check6) || checkpalin(check7) || checkpalin(check8) || checkpalin(check9) || checkpalin(check10) || checkpalin(check11) || checkpalin(check12))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}