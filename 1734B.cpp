// https://codeforces.com/contest/1734/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    cout<<1 <<" ";
                }
                else
                    cout<<0<<" ";
            }
            cout<<endl;
        }
    }
	return 0;
}
