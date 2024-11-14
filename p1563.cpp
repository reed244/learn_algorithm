#include<iostream>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;

    int t[n];
    string s[n];
    for(int i=0;i<n;i++){
        cin>>t[i]>>s[i];
    }
    
    int de,num,ans=0;
    for(int i=0;i<m;i++){
        cin>>de>>num;
        if(t[ans]==0){
            if(de==0)ans=(ans+n-num)%n;
            else ans=(ans+num)%n;
        }else{
            if(de==0)ans=(ans+num)%n;
            else ans=(ans+n-num)%n;
        }
    }
    cout<<s[ans];
    return 0;
}
