#include<iostream>
using namespace std;

//不能开二维数组，(2*10^5)*(2*10^5)*8B>>125MB
//需要先存信息，再比较
int a[10001],b[10001],g[10001],k[10001];

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
       cin>>a[i]>>b[i]>>g[i]>>k[i];
    }
    int x,y;
    cin>>x>>y;
    int ans=-1;
    for(int i=1;i<=n;i++){
       if(a[i]+g[i]>=x&&b[i]+k[i]>=y&&a[i]<=x&&b[i]<=y)
       ans=i;
    }

    cout<<ans;
    
    return 0;
}