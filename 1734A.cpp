// https://codeforces.com/contest/1734/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll ans=1e18,diff=0;
        for(int i=0;i<n-2;i++){
            diff=((a[i+1]-a[i])+(a[i+2]-a[i+1]));
            ans=min(ans,diff);
        }
        cout<<ans<<endl;
    }
	return 0;
}
