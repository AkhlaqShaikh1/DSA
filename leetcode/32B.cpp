#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans;
    int i = 0;
    while (i != s.length())
    {
        if (s[i] == '.')
        {
            ans.push_back('0');
            i += 1;
        }
        else if (s[i] == '-' and s[i + 1] == '.')
        {
            ans.push_back('1');
            i += 2;
        }
        else if (s[i] == '-' and s[i + 1] == '-')
        {
            ans.push_back('2');
            i += 2;
        }
    }
    cout << ans << endl;
    return 0;
}