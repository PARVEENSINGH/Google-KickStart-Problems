#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void getmax(ll &a,ll &b)
{
    if(b>a)
    a=b;
    
}
int solve()
{
    int n,a,res=0;
    cin>>n;
    vector<ll> vec;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    
    ll temp=-1;
    for(int i=0;i<n;i++)
    {
    if(temp<vec[i] && (i+1==n || vec[i]>vec[i+1]))
    res++;
    getmax(temp,vec[i]);
    }
    return res;
    
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
