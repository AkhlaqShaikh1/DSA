#include <bits/stdc++.h>
using namespace std;

/* stack<int> arrayReverse(string a){
    stack<int> rev;
    for(char c:a){
        rev.push(c);
    }

    return rev;
} */

int main()
{
    // stack < int> Name;
    // string a = "Akhlaq";
    // // cin >> a;
    // for(char c: a){
    //     Name.push(c);
    // }
    // for (char c : a)
    // {
    //     cout << Name.top();
    //     Name.pop();
    // }
    stack <char> a;
    string str;
    cin >> str;
    // cin.ignore();
    for(int i=0; i < str.length();i++){
        a.push(str.at(i));
    }
    str = "";
    while(!a.empty()){
        str.push_back(a.top());
        a.pop();
    }

    cout << str;

    return 0;
}