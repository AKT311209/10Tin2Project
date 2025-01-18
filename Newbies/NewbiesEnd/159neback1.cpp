#include <bits/stdc++.h>
using namespace std;

// Backtracking function to generate sequences
void backtrack(int rem, vector<int> &seq, int start)
{
    if (rem == 0)
    {
        for (int i = 0; i < seq.size(); ++i)
            cout << seq[i] << (i < seq.size() - 1 ? ' ' : '\n');
        return;
    }
    for (int i = start; i <= rem; ++i)
    {
        seq.push_back(i);
        backtrack(rem - i, seq, i);
        seq.pop_back();
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> sequence;
    backtrack(n, sequence, 1);
    return 0;
}