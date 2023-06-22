// https://codeforces.com/contest/1733/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void print(ll n,ll w){
    for(ll i=1;i<=n;i+=w){
        ll c=w;
        while(c--){
            cout<<i<<' ';
        }
        if(i==1){
            i++;
        }
    }
    cout<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,x,y; cin>>n>>x>>y;
        if(x==0 && y==0){
            cout<<-1<<endl;
        }
        else if(x>0 && y>0){
            cout<<-1<<endl;
        }
        else if(x==0){
            if((n-1)%y==0){
                print(n,y);
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            if((n-1)%x==0){
                print(n,x);
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
	return 0;
}
