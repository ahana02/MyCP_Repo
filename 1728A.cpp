// https://codeforces.com/contest/1728/problem/A

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
        vector<pair<int,int>> v;
        for(ll i=0;i<n;i++){
            v.push_back({a[i],i});
        }
        sort(v.begin(),v.end());
        cout<<v[n-1].second+1<<endl;
        
    }
	return 0;
}
