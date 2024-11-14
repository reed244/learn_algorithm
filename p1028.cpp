#include<iostream>
using namespace std;

int ans;
int f[1001];

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=i/2;j>=1;j--){
            f[i]+=f[j];
        }
        f[i]++;
    }

    cout<<f[n];
    return 0;
}