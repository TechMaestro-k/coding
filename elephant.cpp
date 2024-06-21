#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int x,t;
    cin >> x;
    if(x>=1 && x<=5 )
    {
        cout << "1";
    }
    else if(x >5 && x<=1000000)
    {
        if(x%5 == 0)
        {
        t = x/5;
        }
        else
        {
        t = (x/5)+1 ;
        }
    cout << t ;
    }
}