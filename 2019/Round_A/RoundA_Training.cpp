#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll min(ll a,ll b)
{
    return a>b?b:a;
}

ll solve ()
{
    int n,p;
    cin>>n>>p;
    
    ll A[n],sum[n+1],temp,max,res,min_val=INT_MAX;
    sum[0]=0;
    for(int i=0;i<n;i++)
    cin>>A[i];
    
    sort(A,A+n);
    for(int i=0;i<n;i++)
    sum[i+1]=sum[i]+A[i];

    
    for(int i=p;i<=n;i++)
    {
        temp=sum[i]-sum[i-p];
        max=sum[i]-sum[i-1];
        res=max*p-temp;
        min_val=min(res,min_val);
    }
    return min_val;

}
int main()
{
    int t;
    cin>>t;
    
    for(int i=1;i<=t;i++)
        cout<<"Case #"<<i<<": "<<solve()<<endl;
  
}