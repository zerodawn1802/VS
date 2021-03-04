#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t,k;
    cin>>t;
    string s;
    bool res;
    while(t--){
        cin>>s;
        if(s[0]=='0'){
            cout<<"0\n";
            continue;
        }
        int f[1000]={0};
        f[0]=f[1]=1;
        fori(i,2,s.size()+1){
            if(s[i-1]>'0') f[i]=f[i-1];
            if(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]<'7')) f[i]+=f[i-2];
        }
        cout<< f[s.size()]<<"\n";
    }
}
