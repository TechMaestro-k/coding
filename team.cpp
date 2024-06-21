#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,a,i,b,c;
    int t=0;
    cin >> n;
    if(n>=1 && n<=1000)
    {
        for(i=0 ; i<n ; i++)
        {
            cin >> a >> b >> c;
            
            if(a+b+c>=2)
            {
            t++;
            }
        }
            cout << t << endl;
    }
}

