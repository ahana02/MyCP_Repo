// https://codeforces.com/contest/1729/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n; cin>>n;
        string s;cin>>s;
        vector<char>v;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
                int p=(s[i-2]-48)*10+ (s[i-1]-48);
                char c=p+96;
                v.push_back(c);
                i=i-2;
            }
            else{
                int q=s[i]-48;
                char c=q+96;
                v.push_back(c);
            }
        }
        reverse(v.begin(),v.end());
        for(char i:v){
            cout<<i;
        }
        cout<<endl;
    }
	return 0;
}
