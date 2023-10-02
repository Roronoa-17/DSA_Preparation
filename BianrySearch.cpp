#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v, int size , int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end-start)/2;

    while(start<=end)
    {
        if(v[mid] == key)
        {
            return mid;
        }

        if(key > v[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}


int main()
{
    vector<int> k = {1, 2, 4, 6,8,9,9};

    cout<<binarySearch(k, 7,9);
}
