#include <bits/stdc++.h>

using namespace std;

int main()
{
    if (fopen("expression.inp", "r"))
    {
        freopen("expression.inp", "r", stdin);
        freopen("expression.out", "w", stdout);
    }

    string s;
    cin >> s;

    string ops[5]{"SUM", "DIF", "MAX", "MIN", "GCD"};
    stack<string> st;
    stack<string> res;

    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '(' && s[i] != ')' && s[i] != ',')
        {
            temp += s[i];
        }
        else if (temp != "")
        {
            st.push(temp);
            temp = "";
        }
    }

    while (!st.empty())
    {
        if (find(begin(ops), end(ops), st.top()) == end(ops))
        {
            res.push(st.top());
            st.pop();
        }
        else
        {
            if (st.top() == "SUM")
            {
                int a = stoi(res.top());
                res.pop();
                int b = stoi(res.top());
                res.pop();
                res.push(to_string(a + b));
                st.pop();
            }
            else if (st.top() == "DIF")
            {
                int a = stoi(res.top());
                res.pop();
                int b = stoi(res.top());
                res.pop();
                res.push(to_string(a - b));
                st.pop();
            }
            else if (st.top() == "MAX")
            {
                int a = stoi(res.top());
                res.pop();
                int b = stoi(res.top());
                res.pop();
                res.push(to_string(max(a, b)));
                st.pop();
            }
            else if (st.top() == "MIN")
            {
                int a = stoi(res.top());
                res.pop();
                int b = stoi(res.top());
                res.pop();
                res.push(to_string(min(a, b)));
                st.pop();
            }
            else if (st.top() == "GCD")
            {
                int a = stoi(res.top());
                res.pop();
                int b = stoi(res.top());
                res.pop();
                res.push(to_string(abs(__gcd(a, b))));
                st.pop();
            }
        }
    }

    cout << res.top();

    return 0;
}