#include <bits/stdc++.h>
using namespace std;

long long int SqrtbinarySearch(int n)
    {
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;

        int ans = -1;

        while(s<=e)
        {
            long long sq = mid * mid;

            if(sq == n)
            {
                return mid;
            }

            if(sq < n)
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }


double moreprecision(int n, int precision, int temp)
{
    double factor = 1;
    double ans = temp;

    for(int i = 0 ; i < precision ; i++)
    {
        factor/=10;

        for(double j = ans; j*j < n; j+=factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int temp = SqrtbinarySearch(n);

    cout<<"the precise answer is "<<moreprecision(n , 3, temp)<<endl;

    return 0;
}