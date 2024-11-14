#include<iostream>
using namespace std;
int n,k;
long long ans;
void dfs(int step,int total,int lastnum){
    if(step==k){
        if(total>=lastnum)ans++;
        return;
    }

    for(int i=lastnum;i<total;i++){
        if(step==k-1){
            if(total<i)return;
        }
        dfs(step+1,total-i,i);
    }
}

int main(){

    cin>>n>>k;
    dfs(1,n,1);
    cout<<ans;
    return 0;

}