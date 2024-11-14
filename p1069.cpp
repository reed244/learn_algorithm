#include<iostream>
using namespace std;

int *primefactor(int a){
    
}

int main(){
    int num;
    cin>>num;
    int m1,m2;
    cin>>m1>>m2;
    int k[m1+1];
    for(int i=2;i<=m1;i++){
        while(m1%i==0){
            k[i]++;
            m1/i;
        }
    }

    int j=0;
    for(;j<num;j++){
        int s;
        cin>>s;
        int t[s+1];
        for(int i=2;i<=s;i++){
            while(s%i==0){
                s/i;
            }
        }
    }
    return 0;
}