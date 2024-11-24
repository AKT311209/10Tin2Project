#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    string s1, s2;
    cin >> k;
    cin.ignore();
    getline(cin, s1);
    getline(cin, s2);

    s1 = " " + s1;
    s2 = " " + s2;
    if (s1.size() != s2.size())
    {
        cout << "NO";
        return 0;
    }
    for (size_t i = 1; i < s1.size(); i++)
    {
        if (s1[i] - s2[i] > k)
        {
            cout << "NO";
            return 0;
            
        }
    }
    
    cout << "YES";
}