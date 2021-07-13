// SInh nhi phan - sinh hoan vi - sinh to hop
#include<bits/stdc++.h>
using namespace std;

void dequi(int sum,int pre,vector<int> pos){

    // in ra tat ca cac tap con co tong = n
    // sum=1 pos[3,x]
    if(sum==0){
        cout<<"(";
        for(int i=0;i<pos.size()-1;i++)cout<<pos[i]<<" ";
        cout<<pos.back();
        cout<<") ";
        return ;
    }

    // phan ra thanh bai toan con

    for(int i=pre;i>=1;i--){
        // mình co th? ch?n thêm t?t c? th?ng <=sum : [1->sum]
            // 3-> 1
            // 1-3=-2
        if(i<=sum){

            pos.push_back(i);
            dequi(sum-i,i,pos);
            pos.pop_back();
        }
    }

    // k?t h?p
}

// 4:      1 1 0 1 1 = 2+2=4
// 4:      1 0 1 0 1 1 =1+1+2=4
// duyet i=1->(n-1) : co the quyet dinh co chen so 0 vao hay ko : 1 0 1 _ 1 _ 1 : 1 + (3)=4  
//          1 1 1 1 : 1 + 1 _ 1 + 1 = 1 + 2 + 1=(1,2,1)= + _
//           1 - 1  - 1 - 1 - 1 - 1 + 1 - 1 - 1 - 1 + 1= 6 + 4 + 1 =11=(6,4,1)    2^(n-1) dien - +  vao 
// 1-1-1+1 =3+1=(3,1)
// 1-1 + 1 + 1=(2,1,1)

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



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<string>a= sinhNhiPhan(n-1);
        if(n==1){
            cout<<"(1)\n";
            continue;
        }

        set< vector<int> > ans;

        for(int i=0;i<a.size();i++){
            
            vector<int> pos;
            pos.push_back(1);
            string sau=a[i];
            for(int k=0;k<sau.size();k++){
                if(sau[k]=='0'){
                    pos[pos.size()-1]+=1;
                }
                else
                {
                    pos.push_back(1);
                }
                
            }
            sort(pos.begin(),pos.end()); // (1,4)->(4,1)
            reverse(pos.begin(),pos.end());
            if(ans.find(pos)==ans.end()){
                
                cout<<"(";
                for(int i=0;i<pos.size()-1;i++)cout<<pos[i]<<" ";
                cout<<pos.back();
                cout<<") ";

                ans.insert(pos);
            }
            
        }

    }
}
