#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    if(m>=1 && m<=16 && n>=1 && n<=16)
    {
        cout << (m*n)/2;
    }
}
