#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int  solve()
{
    int n,b,res=0;
    cin>>n>>b;
    
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
    
    sort(A,A+n);
    for(int i=0;i<n;i++)
    {
        if(b<A[i])
        break;
        else if(b==A[i])
        {
            res++;
            break;
        }
        else
        {
            res++;
            b=b-A[i];
        }
    }
    return res;
}    
int main()
{
    int t;
    cin>>t;
    
    for(int i=1;i<=t;i++)
        cout<<"Case #"<<i<<": "<<solve()<<endl;
}