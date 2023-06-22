// https://codeforces.com/contest/1733/problem/C

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
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        // equal the parity and value  O: ar=al; E al=ar
        vector<pair<int,int>> ans;
        ll sum=a[0]+a[n-1];
        if(sum%2==0){
            a[0]=a[n-1];
            ans.push_back({1,n});
        }
        else{
            a[n-1]=a[0];
            ans.push_back({1,n});
        }
        ll c=a[0]%2;
        for(int i=1;i<n-1;i++){
            if(a[i]%2==c){
                a[i]=a[n-1];
                ans.push_back({i+1,n});
            }
            else{
                a[i]=a[0];
                ans.push_back({1,i+1});
            }
        }
        cout<<ans.size()<<endl;
        for(auto it:ans){
            cout<<it.first<<' '<<it.second<<endl;
        }
    }
	return 0;
}
