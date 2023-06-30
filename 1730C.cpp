// https://codeforces.com/contest/1730/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        string s; cin>>s;
       map<ll,vector<ll>> m;
       for(int i=0;i<s.size();i++){
           m[s[i]-'0'].push_back(i);
       }
       ll li=-1;
       
       for(auto i:m){
           vector<ll> v=i.second;
           ll c=0;
           
           for(int j=0;j<v.size();j++){
               if(v[j]<li){
                   c++;
               }
               else{
                   cout<<i.first;
                   li=v[j];
               }
           }
          for(int k=0;k<c;k++){
              if(i.first==9){
                  cout<<9;
              }
              else{
              cout<<i.first+1;}
          }
       }
       cout<<endl;
    }
	return 0;
}
 
