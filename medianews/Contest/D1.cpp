#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
  /*ll n,m,k;
  cin>>n>>m>>k;
  
  for(int i=0;i<k;i++){
    ll sx,sy,dx,dy;
    
  }*/
  int n;
  cin>>n;
  
  string ans="";
  
  string ss;
  cin>>ss;
  ans+=ss;
  
  for(int i=1;i<n;i++){
    string s; cin>>s;
    
    int k=0;
    for(int j= max( (int)(ans.length()-s.length()), 0) ; j<ans.length() ; j++){
        if(ans[j] == s[k]){
            k++;
        }
        else if(ans[j] == s[0]) {
            k=1;
        }
        else{
            k=0;
        }
    }
    
    for(int j=k ; j<s.length() ; j++){
        ans+=s[j];
    } 
  }
  
  cout<<ans<<endl;
}


int main()
{
    int t=1; 
    //cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}
