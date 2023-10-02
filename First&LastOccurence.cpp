#include <bits/stdc++.h>
using namespace std;

int firstOc(vector<int> &a, int key)
{
    int s = 0, e = a.size();
    int mid = s + (e -s)/2;
    int ans = 0;

    while(s<=e)
    {
        if(a[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if(key > a[mid])
        {
            s = mid + 1;
        }
        else if(key < a[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }

    return ans;
}

int lastOc(vector<int> &p, int key)
{
    int s = 0, e = p.size();
    int mid = s + (e -s)/2;
    int ans = 0;

    while(s<=e)
    {
        if(p[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(key > p[mid])
        {
            s = mid + 1;
        }
        else if(key < p[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }

    return ans;
}

int main()
{
    vector < int > k = {1, 2, 3,3,3,3,3,3,3,5};

    cout<<firstOc(k, 3)<<endl;
    cout<<lastOc(k, 3)<<endl;

    return 0;
}