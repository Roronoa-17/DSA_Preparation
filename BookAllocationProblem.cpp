#include <bits/stdc++.h> 

bool ispossible(int n, int m, vector<int> time,long long int mid)

{

    long long int studentcount=1;

    long long int mintues = 0;

 

    for(int i=0;i<m;i++)

    {

        if(mintues+ time[i] <=mid) 

        {

            mintues+=time[i];

        }

        else{

            studentcount++;

            if(time[i]>mid|| studentcount>n)

            {

                return false;

            }

            mintues=0;

            mintues += time[i];

        }

    }

    return true;

}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 

{   

    if(n>m)

    {

        return -1;

    }

    long long int sum=0;

    for(long long i=0;i<m;i++)

    {

        sum+=time[i];

    }

    long long s=0;

    long long e=sum;

    long long ans = -1;

    while(s<=e)

    {

        long long int mid = s+(e-s)/2;

        if(ispossible(n,m,time,mid))

        {

            ans = mid;

            e=mid-1;

        }

        else

        {

            s=mid+1;

        }

    }

    return ans;

}