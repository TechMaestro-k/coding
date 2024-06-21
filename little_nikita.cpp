#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t,m,n,p,test;
    cin >> test;
    if(test>=1 && test<=100 )
    {
        for (p=1;p<=test;p++)
        {
        cin >> n >> m;
        if (m>=1 && m<=100 && n>=1 && n<=100)
        {
            
            if(m <= n && (n-m) % 2 == 0)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        }
        return 0;
    }

}