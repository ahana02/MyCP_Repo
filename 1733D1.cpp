// https://codeforces.com/contest/1733/problem/D1

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,x,y;cin>>n>>x>>y;
        string s1,s2; cin>>s1;cin>>s2;
        ll c=0;ll ans;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i])
                c++;
        }
        if(c%2!=0){
            cout<<-1<<endl;
        }
        else if(c==0){
            cout<<0<<endl;
        }
        else{
            if(c>2){
                cout<<c/2*y<<endl;
            }
            else{
                ll v;
                for(int i=0;i<n;i++){
                    if(s1[i]!=s2[i]){
                        v=i;
                        break;
                    }
                }
            if(s1[v+1]!=s2[v+1]){
                ans=min(x,2*y);
            }
            else{
                ans=y;
            }
            cout<<ans<<endl;
            }
        }
    }
	return 0;
}
