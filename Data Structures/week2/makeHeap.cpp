#include <bits/stdc++.h>
using namespace std;

class HeapBuilder
{
private:
    vector<int> data_;
    vector<pair<int, int>> swaps_;

    void WriteResponse() const
    {
        cout << swaps_.size() << "\n";
        for (int i = 0; i < swaps_.size(); ++i)
        {
            cout << swaps_[i].first << " " << swaps_[i].second << "\n";
        }
    }

    void ReadData()
    {
        int n;
        cin >> n;
        data_.resize(n);
        for (int i = 0; i < n; ++i)
            cin >> data_[i];
    }
    // idk how these works
    void SiftUp(int i)
    {
        while (i > 0 && data_[(i - 1) >> 1] > data_[i])
        {
            swap(data_[(i - 1) >> 1], data_[i]);
            swaps_.push_back(make_pair((i - 1) >> 1, i));
            i = (i - 1) >> 1;
        }
    }
    //dont know how this works :(
    void SiftDown(int i)
    {
        int minIndex = i;
        int l = 2 * i + 1, r = 2 * i + 2;
        if (l < data_.size() && data_[l] < data_[minIndex])
            minIndex = l;
        if (r < data_.size() && data_[r] < data_[minIndex])
            minIndex = r;
        if (minIndex != i)
        {
            swap(data_[i], data_[minIndex]);
            swaps_.push_back(make_pair(i, minIndex));
            SiftDown(minIndex);
        }
    }
    void GenerateSwaps()
    {
        swaps_.clear();
     
        for (int i = (data_.size() - 2) >> 1; i >= 0; i--)
            SiftDown(i);


        // TODO: replace by a more efficient implementation
        //Naive Implementation
        /* for (int i = 0; i < data_.size(); ++i)
           for (int j = i + 1; j < data_.size(); ++j) {
             if (data_[i] > data_[j]) {
               swap(data_[i], data_[j]);
               swaps_.push_back(make_pair(i, j));
             }
           } */
    }

public:
    void Solve()
    {
        ReadData();
        GenerateSwaps();
        WriteResponse();
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    HeapBuilder heap_builder;
    heap_builder.Solve();

    return 0;
}