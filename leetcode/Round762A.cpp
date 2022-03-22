#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    int n;
    cin >> n;
    while (n--)
    {
        bool ok = true;
        cin >> t;
        int s = int(t.length()/2);
        if (t.length()%2!=0)
        {
            ok = false;
        }
        else
        {
            for (int i = 0; i < t.length()/2; i++)
            {
                if(t[i] != t[s+i]){
                    ok = false; 
                }
                
            }
        }
        cout << (ok ? "\nYES\n" : "\nNO\n");
    }

    return 0;
}