#include <bits/stdc++.h>
using namespace std;

class Heap
{
private:
    vector<int> data;
    vector<pair<int, int>> swaps;

    void showData()
    {
        cout << swaps.size() << endl;
        for (auto &i : swaps)
        {
            cout << i.first << " " << i.second << endl;
        }
    }

    void getData()
    {
        int n;
        cin >> n;
        data.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> data[i];
        }
    }
    double Parent(int i){
        return floor(i/2);
    }
    void SiftUp(int i){
        while(i>1 && data[Parent(i)] < data[i]){
            swap(data[Parent(i)], data[i]);
            swaps.push_back(make_pair(data[Parent(i),data[i]]));
            i = Parent(i);
        }
    }
};

int main()
{

    return 0;
}