#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int i,k,p,q;
    int a[5][5];
    for(i=0;i<5;i++)
    {
        for(k=0;k<5;k++)
        {
            cin >> a[i][k] ;
        }
    }
    for(i=0;i<5;i++)
    {
        for(k=0;k<5;k++)
        {
            if(a[i][k]==1)
            {
                p=i;
                q=k;
            }
            
        }
    }
    int moves= (abs(2-p) + abs(2-q));
    cout << moves << endl;
}