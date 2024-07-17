#include<iostream>
using namespace std;

int n,k;
int num[20];

int ans;
bool isprime(int digit){

    for(int i=2;i*i<=digit;i++){
        if(digit%i==0)return false;
    }

    return true;
}

void dfs(int step,int total,int p){
    if(step>k){
        if(isprime(total)){
            ans++;
        }
        return;
    }
    
    for(int i=p;i<n;i++){
        dfs((step+1),(total+num[i]),i+1);        
    }
}

int main(){
    
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    dfs(1,0,0);
    cout<<ans;
    
    return 0;
}