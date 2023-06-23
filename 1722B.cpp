// https://codeforces.com/contest/1722/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,flag=0;cin>>n;
        string s1,s2;
        cin>>s1;cin>>s2;
        for(int i=0;i<n;i++){
            if((s1[i]!=s2[i]) && (s1[i]=='R'|| s2[i]=='R')){
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
	return 0;
}
