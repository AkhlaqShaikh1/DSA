#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    map<int, string> phoneBook;

    for (int i = 0; i < n; i++)
    {
        string q;
        cin >> q;
        int num;
        string name;
        if (q[0] == 'f')
        {
            try
            {
                cin >> num;
                string ans = phoneBook.at(num);
                throw ans;
                // q.empty();
            }
            catch (string a)
            {
                cout << a << endl;
            }
            catch (...)
            {
                cout << "not found\n";
            }
        }
        if (q[0] == 'a')
        {
            cin >> num;
            cin >> name;
            // auto p1 = make_pair(num,name);
            // old way
            if (phoneBook.find(num) != phoneBook.end())
            {
                phoneBook[num] = name;
            }
            else
            {
                // otherwise, just add it
                phoneBook[num] = name;
            }
            // New Way
            //  phoneBook.insert_or_assign(num, name);
            //  q.empty();
        }
        if (q[0] == 'd')
        {
            cin >> num;
            phoneBook.erase(num);
        }
    }

    return 0;
}