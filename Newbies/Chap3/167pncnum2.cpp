#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    for (int i = 10000; i <= 99999; i++)
    {
        int first = i / 10000;
        int second = (i / 1000) % 10;
        int third = (i / 100) % 10;
        int fourth = (i / 10) % 10;
        int fifth = i % 10;

        bool equal = first == second || first == third || first == fourth || first == fifth || second == third || second == fourth || second == fifth || third == fourth || third == fifth || fourth == fifth;
        if (equal == true && (first + second + third + fourth + fifth) == n)
        {
            count++;
        }
    }
    cout << count;
}
