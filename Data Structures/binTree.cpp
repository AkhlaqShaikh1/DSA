#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {42, 29, 19, 14, 7, 18, 12, 11, 13};
    int parent, leftChild, rightChild;
    for (size_t i = 0; i < 8; i++)
    {
        if (i != 0)
        {
            parent = floor((i - 1) / 2);
            cout << "Parent: " << arr[parent] << endl;

            leftChild = arr[(2 * 1) + 1];
            cout << "Left Child: " << leftChild << endl;

            rightChild = arr[(2 * i) + 2];
            cout << "Right Child: " << rightChild << endl;
        }
        else
        {
            parent = arr[(i-1)/2];
            cout << "Parent: " << arr[parent] << endl;

            leftChild = arr[(2 * 1) + 1];
            cout << "Left Child: " << leftChild << endl;

            rightChild = arr[(2 * i) + 2];
            cout << "Right Child: " << rightChild << endl;

        }
    }

    return 0;
}