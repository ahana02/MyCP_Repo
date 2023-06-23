// https://codeforces.com/contest/1734/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string s;
        cin>>s;
        ll ans=0;
        vector<ll>a(n+1,0);
        for(int i=1;i<=n;i++){
            if(s[i-1]=='1')
                continue;
            for(int j=i;j<=n;j+=i){
                if(s[j-1]=='1')
                    break;
                else{
                    if(a[j-1]==0){
                        a[j-1]=2;
                        ans+=i;
                    }
                  
                }
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
