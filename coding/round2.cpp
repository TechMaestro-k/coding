#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,i,t,k;
    cin >> t;
    for(i=1; i<=t ;i++)
    {
        cin >> n;
        int msum=0;
        int sum=0;
        for(x=2; x<=n ; x++)
        {
        
        
            for(k=1 ; k*x<=n ;k++)
            {
                
                sum = sum + k*x;
            }
            
        }
            if(sum>msum)
                {
                    msum=sum;
                    cout << x << endl;
                }
        }
    }
