// https://codeforces.com/contest/1730/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,c; cin>>n>>c;
        vector<ll>a(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        
        ll ans=0;
        for(auto it: mp){
            if(c<it.second){
                ans+=c;
            }
            else
                ans+=it.second;
        }
        cout<<ans<<endl;
    }
	return 0;
}
