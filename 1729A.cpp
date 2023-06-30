// https://codeforces.com/contest/1729/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll a,b,c; cin>>a>>b>>c;
        ll p=abs(a-1);
        ll q=abs(c-b)+abs(c-1);
        if(p<q){
            cout<<1<<endl;
        }
        else if(q<p){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
	return 0;
}
