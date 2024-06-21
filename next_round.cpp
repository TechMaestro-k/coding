#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,k,i;
    int t=0;
    cin >> n >> k;
    if(n>=1 && n<=50 && k>=1 && k<=50 && k<=n)
    {
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i]  ;
        }
        for(i=0;i<n;i++)
        {
            if(a[i] >= a[k-1] && a[i]!=0)
            {
                t++;
            }
        }
        cout<< t;
    }
}