// #include <iostream>
// #include <cmath>  // for sqrt()
// using namespace std;

// tuple<int, int> checkrec(int a, int b, int c, int d) {
//     if (a==c || a==d || b==c || b==d) {
//         return make_tuple(1, 2);
//     } else {
//         return make_tuple(-1, -1);
//     }
// }
// int main() {
//     long long a, b, c, d, e, f, womax, sqarea;
//     cin >> a >> b >> c >> d >> e >> f;
//     long long res;
//     // sort rec sizes 
//     if (a>b) swap(a, b); if (c>d) swap (c, d); if (e > f) swap(e, f); // a<=b, c<=d, e <= f

//     // Square
//     // Pile
//     if ((b==d && d==f) && (a+c+e==b)) res = 1;
//     // L- shape
//     if ((a + c == e && b == d && b + f == e) ||  // Trường hợp ghép theo cách 1
//         (a + e == c && b == f && b + d == c) ||  // Trường hợp ghép theo cách 2
//         (c + e == a && d == f && d + b == a)) {  // Trường hợp ghép theo cách 3
//         res ;  // Ghép thành hình chữ nhật
//     }

    
// }
#include <bits/stdc++.h>