// SInh nhi phan - sinh hoan vi - sinh to hop
#include<bits/stdc++.h>
using namespace std;
vector<string> sinhNhiPhan(int n){
    vector<string> kq;

    string s="",end="";
    for(int i=0;i<n;i++)s+='0',end+='1'; 
    // 00000 -> 11111
    do
    {

        kq.push_back(s);


        int i=s.size()-1;
        while(s[i]=='1'){
            s[i]='0';
            i--;
        }
        s[i]='1';
        

    } while (s!=end);
    
    kq.push_back(end);

    return kq;
} 

vector<vector<int> > sinhHoanVi(int n){
    // n>10
    // 0,1,2,3,4,5,6,7,8,9,10
    vector<vector<int> > kq;
    vector<int> s,end;
    for(int i=1;i<=n;i++)s.push_back(i),end.push_back(n-i+1);
    do
    {
        kq.push_back(s);
        // tim diem dau tien ma a[i+1]<a[i]
        // sau khi tim duoc thi minh tim diem vt be nhat ma a[vt]>a[i+1] && vt>=i
        // swap a(vt),a[i] : sap xep lai doan [i,n]
        int i=n-1;
        while(s[i-1]>s[i])i--;
        i-=1;
        int vt=n-1;
        while(s[vt]<=s[i])vt-=1;

        swap(s[vt],s[i]);
        // sap xep lai doan phia sau 

        int l=i+1;
        int r=n-1;
        while(l<r){
            swap(s[l],s[r]);
            l++;
            r--;
        }

        /* code */
    } while (s!=end);
    kq.push_back(end);
    return kq;
    
}
vector<vector<int> > sinhToHop(int k,int n){
    vector<int> s,end;
    vector<vector<int> > kq;
    for(int i=1;i<=k;i++)s.push_back(i),end.push_back(n-k+i);  // n-k+1,n-k+2,...,n-k+i,.... n       3 4 5 
    do
    {
        kq.push_back(s);
        // tim vi tri dau tien s[i]!=n-k+i
        int i=k-1;
        while(s[i]==n-k+i+1)i--;
        s[i]+=1;
        i+=1; // s[i]=s[i-1]+1 tu vi tri i+1 -> k-1;
        while(i<k){
            s[i]=s[i-1]+1;
            i+=1;
        }

    } while (s!=end);
    kq.push_back(end);
    return kq;
    
}

vector<string> sinhNhiPhan2(int n){
    // 1 sau nhi phan do dai n thi co tat ca bn xau 2^n 00 01 10 11 
    // 1 so trong may tinh  dc bieu dien duoi dang bit  00 -> 01 -> 2 -> 3 [0->2^2-1=3]
    vector<string> kq;
    int end=1;
    // for(int i=1;i<=n;i++)end*=2;
    for(int i=0;i<(1LL<<n);i++){
        string s="";
        for(int j=n-1;j>=0;j--){
            if((1LL<<j)&i)s+='1';
            else s+='0';
        }
        kq.push_back(s);

    }
    return kq;

}
vector<vector<int> > sinhHoanvi2(int n){
    vector<vector<int> > kq;
    vector<int> s;
    for(int i=1;i<=n;i++)s.push_back(i);

    do
    {
        kq.push_back(s);
        
    } while (next_permutation(s.begin(),s.end()));
    return kq;

}
int main(){
    
}
