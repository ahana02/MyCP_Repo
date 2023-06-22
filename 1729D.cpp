// https://codeforces.com/contest/1729/problem/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll>x(n);
        vector<ll>y(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
        }
        vector<ll> m;
        for(int i=0;i<n;i++){
            m.push_back(y[i]-x[i]);
        }
        ll ans=0;
        sort(m.begin(),m.end());
        ll i=0;ll j=n-1;
        while(i<j){
            if(m[j]+m[i]<0){
                i++;
            }
            else{
                ans++;
                i++;
                j--;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
