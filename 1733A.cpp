// https://codeforces.com/contest/1733/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;cin>>t;
    while(t--){
        long long n,k,x;cin>>n>>k;
        map<long long,long long>mp;
        for(int i=1;i<=n;i++){
            cin>>x;
            mp[i%k]=max(mp[i%k],x);
        }
        long long sum=0;
        for(auto it:mp){
            sum+=it.second;
        }
        cout<<sum<<endl;
    }
	return 0;
}
