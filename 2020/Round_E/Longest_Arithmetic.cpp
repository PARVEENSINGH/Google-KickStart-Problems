#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve()
{
    ll n,a,res=0;
    cin>>n;
    vector<ll> vec;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    
    ll temp=vec[1]-vec[0];
    res=1;
    ll ans=0;

    for(ll i=2;i<n;i++)
    {
        if((vec[i]-vec[i-1])==temp)
            res++;
        else
        {
            temp=vec[i]-vec[i-1];
            ans=max(ans,res);
            res=1;
        }          

    }
    ans=max(ans,res);
    return ans+1;
    
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": "<<solve()<<endl;
    }
    return 0;
}
