#include<iostream>
using namespace std;

long long f[10000001];

int main(){
    long long M;
    cin>>M;
    f[0]=0;
    f[1]=1;
    for(int i=2;i<100000001;i++){
        //提前对每个数mod(M)，不然会数字会超上限
        f[i]=(f[i-1]+f[i-2])%M;
        if(f[i]==1&&f[i-1]==0){
            cout<<i-1;
            return 0;
        }
    }
    return 0;
}