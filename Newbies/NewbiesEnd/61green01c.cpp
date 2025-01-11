#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    // Max
    long long sumMax = 0;
    for (int i = 1; i<=n; i++) {
        string str;
        cin >> str;
        if (str == "DNF") { 
            continue;
        }
        int x = stoi(str);
        if (x == 1) sumMax += 25;
        else if (x == 2) sumMax+= 18;
        else if (x == 3) sumMax+= 15;
        else if (x == 4) sumMax+= 12;
        else if (x == 5) sumMax+= 10;
        else if (x == 6) sumMax+= 8;
        else if (x == 7) sumMax+= 6;
        else if (x >=8 && x <= 10) sumMax+= 2;
        else sumMax+= 1;
    }

    // Charles

    long long sumCharles = 0;
    for (int i = 1; i<=n; i++) {
        string str;
        cin >> str;
        if (str == "DNF") { 
            continue;
        }
        int x = stoi(str);
        if (x == 1) sumCharles += 25;
        else if (x == 2) sumCharles+= 18;
        else if (x == 3) sumCharles+= 15;
        else if (x == 4) sumCharles+= 12;
        else if (x == 5) sumCharles+= 10;
        else if (x == 6) sumCharles+= 8;
        else if (x == 7) sumCharles+= 6;
        else if (x >=8 && x <= 10) sumCharles+= 2;
        else sumCharles+= 1;
    }

    // Carlos 

    long long sumCarlos = 0;
    for (int i = 1; i<=n; i++) {
        string str;
        cin >> str;
        if (str == "DNF") { 
            continue;
        }
        int x = stoi(str);
        if (x == 1) sumCarlos += 25;
        else if (x == 2) sumCarlos+= 18;
        else if (x == 3) sumCarlos+= 15;
        else if (x == 4) sumCarlos+= 12;
        else if (x == 5) sumCarlos+= 10;
        else if (x == 6) sumCarlos+= 8;
        else if (x == 7) sumCarlos+= 6;
        else if (x >=8 && x <= 10) sumCarlos+= 2;
        else sumCarlos+= 1;
    }

    cout << sumMax << '\n' << sumCharles << '\n' << sumCarlos << '\n';

    long long maxpts = max({sumMax, sumCharles, sumCarlos});
    if ((maxpts == sumMax) + (maxpts == sumCharles) + (maxpts == sumCarlos) > 1) {
        cout << "No race winner";
    } else if (maxpts == sumMax) {
        cout << "Super Max";
    } else if (maxpts == sumCharles) {
        cout << "Lord Perceval";
    } else {
        cout << "Smooth Operator";
    }
}