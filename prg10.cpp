#include<bits/stdc++.h>
using namespace std;
int track(int n,int i)
{
    if(i>n)
    {
        return -1;
    }
    if(n==i)
    {
        return 1;
    }
    return track(n,i+1)+track(n,i+2);
}

int main()
{
    int n=5,i=0;
    int z=track(n,i);
    cout<<z;
}