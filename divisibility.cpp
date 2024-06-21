#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,t;
    cin >> t;
    if (t>=1 && t<=pow(10,4))
    {
        for(int i=1; i<=t ; i++)
        {
            cin >> a >> b ;
                if(a%b==0)
                {
                    cout << "0" <<endl;
                }
                else
                {
                    c=a%b;
                    cout << b-c << endl;
                }
        }

    }
}