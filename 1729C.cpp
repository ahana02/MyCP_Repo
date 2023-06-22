// https://codeforces.com/contest/1729/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        string s; cin>>s;
        vector<pair<char,ll>> v;
        ll n=s.length();
        for(int i=1;i<s.length()-1;i++){
            v.push_back({s[i],i});
        }
        sort(v.begin(),v.end());
        ll f=s[0]-'a'+1;
        ll e=s[n-1]-'a'+1;
        ll cost=abs(e-f);
        cout<<cost<<" ";
        vector<ll> ans;
        if(f<=e){
            for(auto i:v){
                char c=i.first; ll ind=i.second;
                if(c>=s[0] && c<=s[n-1]){
                    ans.push_back(ind);
                }
            }
        }
        else{
            reverse(v.begin(),v.end());
            for(auto i:v){
                char c=i.first; ll ind=i.second;
                if(c<=s[0] && c>=s[n-1]){
                    ans.push_back(ind);
                }
            }
        }
        cout<<ans.size()+2<<endl;
        cout<<1<<" ";
        for(auto i: ans){
            cout<<i+1<<" ";
        }
        cout<<n<<endl;
        
    }
	return 0;
}
