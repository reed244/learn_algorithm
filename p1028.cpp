#include<iostream>
using namespace std;

int ans;

void dfs(int n){
    if(n/2==0)return;

    for(int i=n/2;i>=1;i--){
        ans++;
        dfs(i);
    }
}

int main(){
    int n;
    cin>>n;
    dfs(n);
    cout<<ans+1;
    return 0;
}