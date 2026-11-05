#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10]={0};int q=0,j=-1;
    for(int i=0;i<=9;++i){
        cin>>a[i];if(a[i]%2==1){q++;j=i;}
    }
    if(q>1){cout<<-1<<endl;return 0;}
    string s="";
    if(a[0]==0){
        for(int i=1;i<=9;i++){
            int k=a[i]/2;a[i]%=2;
            for(int q=0;q<k;++q){s+=i+'0';}
        }
    }
    else{
        int w=-1,qq=-1;
        for(int i=1;i<=9;i++){
            if(a[i]/2>0){w=i;break;}
        }
        if(w==-1){  
            if(a[0]==1) cout<<0<<endl;
            else cout<<-1<<endl;
            return 0;
        }
        else{
            s+=(char)(w+'0');     
            a[w] -= 2; 
            for(int i=0;i<=9;i++){
                int k=a[i]/2;a[i]%=2;
                for(int q=0;q<k;++q){s+=i+'0';}
            }
        }
    }
     string p(s.rbegin(), s.rend());
    if(j!=-1){cout<<s<<j<<p<<endl;}
    else{cout<<s<<p<<endl;}
}