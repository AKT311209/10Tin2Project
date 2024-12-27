#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    cout << (4LL * N * N * N - N) / 3;
}
/* Improved version of
int main()
{
    long long N;
    cin >> N;

    long long cur = N; // 1st row largest number
    long long sum = cur;
    long long dis = (N-1)*2; // distance between 2 largest numbers of 1st and last row
    while (dis > 0) {
        cur += dis;
        sum += cur;
        dis -= 2;
    }
    sum = sum*2 - N; // Adjust to odd nums (a*2-1)
    cout << sum;
} */

