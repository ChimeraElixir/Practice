#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, ans, sum, i, j, m;
    string a;
    cin>>t;
    
    for(j=1; j<=t; j++)
    {
        cin>>n;
        cin>>a;
        
        ll pre[n];
        
        pre[0]=a[0]-48;
        
        for(i=1; i<n; i++)
        {
            pre[i]=pre[i-1]+a[i]-48;
        }
        
        m=(n+1)/2;
        
        ans=0;
        
        for(i=0; i+m-1<n; i++){
            
            sum=pre[i+m-1];
            if(i>0){
                sum=sum-pre[i-1];
            }
            ans=max(ans, sum);
        }
        
        cout<<"Case #"<<j<<": "<<ans<<"\n";
    }
}

