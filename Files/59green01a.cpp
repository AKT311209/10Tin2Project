#include <bits/stdc++.h>    

using namespace std;

int main() {
    string month;
    int day;
    cin >> month >> day;

    string zodiac;

    if ((month == "Mar" && day >=21) || (month == "Apr" && day <= 20)) {
        zodiac = "Aries";
    } else if ((month == "Apr" && day >=21) || (month == "May" && day <= 20)) {
        zodiac = "Taurus";
    } else if ((month == "May" && day >=21) || (month == "Jun" && day <= 21)) {
        zodiac = "Gemini";
    } else if ((month == "Jun" && day >=22) || (month == "Jul" && day <= 22)) {
        zodiac = "Cancer";
    } else if ((month == "Jul" && day >=23) || (month == "Aug" && day <= 22)) {
        zodiac = "Leo";
    } else if ((month == "Aug" && day >=23) || (month == "Sep" && day <= 21)) {
        zodiac = "Virgo";
    } else if ((month == "Sep" && day >=22) || (month == "Oct" && day <= 22)) {
        zodiac = "Libra";
    } else if ((month == "Oct" && day >=23) || (month == "Nov" && day <= 22)) {
        zodiac = "Scorpio";
    } else if ((month == "Nov" && day >=23) || (month == "Dec" && day <= 21)) {
        zodiac = "Sagittarius";
    } else if ((month == "Dec" && day >=22) || (month == "Jan" && day <= 20)) {
        zodiac = "Capricorn";
    } else if ((month == "Jan" && day >=21) || (month == "Feb" && day <= 19)) {
        zodiac = "Aquarius";
    } else {
        zodiac = "Pisces";
    }

    cout << zodiac;
}