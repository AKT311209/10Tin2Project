#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int mostPopularNumber = a;
    int mostPopularCount = 1;
    mostPopularNumber = a;
    mostPopularCount = 1;
    // Count occurrences of each number
    if (b != a)
    {
        int count = (b == c) + (b == d) + (b == e)+1;
        if (count >= mostPopularCount)
        {
            if (count == mostPopularCount && b < mostPopularNumber)
            {
                // If counts are equal, choose the larger number
            }
            else
            {
                mostPopularNumber = b;
                mostPopularCount = count;
            }
        }
    }

    if (c != a && c != b)
    {
        int count = (c == d) + (c == e)+1;
        if (count >= mostPopularCount)
        {
            if (count == mostPopularCount && c < mostPopularNumber)
            {
                // If counts are equal, choose the larger number
            }
            else
            {
                mostPopularNumber = c;
                mostPopularCount = count;
            }
        }
    }

    if (d != a && d != b && d != c)
    {
        int count = (d == e)+1;
        if (count >= mostPopularCount)
        {
            if (count == mostPopularCount && d < mostPopularNumber)
            {
                // If counts are equal, choose the larger number
            }
            else
            {
                mostPopularNumber = d;
                mostPopularCount = count;
            }
        }
    }

    if (e != a && e != b && e != c && e != d)
    {
        int count = 1;
        if (count >= mostPopularCount)
        {
            if (count == mostPopularCount && e < mostPopularNumber)
            {
                // If counts are equal, choose the larger number
            }
            else
            {
                mostPopularNumber = e;
                mostPopularCount = count;
            }
        }
    }

    cout << mostPopularNumber;

    return 0;
}
