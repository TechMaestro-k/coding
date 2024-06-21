#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m ;
    if(n>m)
    {
        cout << "greater" << endl;
    }
    else if(n<m)
    {
        cout<< "lesser" << endl;

    }
    else
    {
        cout << "equal" << endl;
    }
}