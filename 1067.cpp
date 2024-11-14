#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cin>>num;
    int a;
    for(int i=num;i>=0;i--){
        cin>>a;
        if(a){
            if(i!=num&&a>0)cout<<"+";    
            if(a<0)cout<<"-";
            if(i==0)cout<<abs(a);
            else{
                if(abs(a)==1){
                    if(i!=1)cout<<"x^"<<i;
                    else cout<<"x";
                }else{
                    if(i!=1)cout<<abs(a)<<"x^"<<i;
                    else cout<<abs(a)<<"x";
                }
            }
        }
    }
    
    return 0;
}