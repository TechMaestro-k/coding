#include<bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int y,x,t,s,p,a,q,n,test,i;
    cin >> test;
    if(test>=1 && test<=pow(10,4) ){
        for(i=1 ; i<=test ; i++){
            cin >> x >> y;

            if(x>=0 && x<=99 && y>=0 && y<=99){
                t=y/2;
                y%2==0 ? s=t : s=t+1;
                n = (15*s-4*y);
                if(x<=n){
                cout<< s <<endl;
                }
            else if(x > n){
                p= x - n;
                a = p/15;
                p%15==0 ? q = s+(a) : q = s+(a+1);
                cout << q << endl;
                }
            }
            else{
                cout << "number of application exceeds the limit" << endl;
            }
        }
    }
    else{
        cout << "test cases exceed the limit" << endl;
    }
    cin.get();
}