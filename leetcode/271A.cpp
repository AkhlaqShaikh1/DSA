#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year; // 1987
    // int temp;
    cin >> year;
    while (true)
    {
        year++;
        int a = year / 1000;     // 1987 / 1000 = 1;
        int b = year / 100 % 10; // 1987/100 = 19%10 = 9
        int c = year / 10 % 10;  // 1987/10 = 198 % 10 = 8;
        int d = year % 10;       // 1987 % 10 = 7;

        if (a != b && a != c && a != d && b != c && b != d && c != d){
            break;
        }
        
    }
    cout << year << endl;
    return 0;
}