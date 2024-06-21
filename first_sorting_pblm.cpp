#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int log(int a ,int b)
{
    cout << a << " " << b << endl;
}
int main()
{
    int t,x,y,i;
    cin >> t;
    if(t>=1 && t<=100)
    {
        for(i=1;i<=t;i++)
        {
        cin >> x >> y;
            if(x>=0 && x<=9 && y>=0 && y<=9)
            {
                x>y ? log(y,x) : log(x,y);
            }
        }
        
    }
}


