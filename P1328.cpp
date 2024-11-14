#include<iostream>
using namespace std;


int main(){
    int n,na,nb;
    cin>>n>>na>>nb;
    int as[na],bs[nb];
    for(int i=0;i<na;i++){
        cin>>as[i];
    }
    for(int i=0;i<nb;i++){
        cin>>bs[i];
    }
    int agrade=0,bgrade=0;
    for(int i=0;i<n;i++){
        int ages=as[i%na];
        int bges=bs[i%nb];
        if(ages==bges);
        else if(ages==0){
            if(bges==1)bgrade++;
            else if(bges==2)agrade++;
            else if(bges==3)agrade++;
            else if(bges==4)bgrade++;
        }else if(ages==1){
            if(bges==0)agrade++;
            else if(bges==2)bgrade++;
            else if(bges==3)agrade++;
            else if(bges==4)bgrade++;
        }else if(ages==2){
            if(bges==0)bgrade++;
            else if(bges==1)agrade++;
            else if(bges==3)bgrade++;
            else if(bges==4)agrade++;
        }else if(ages==3){
            if(bges==0)bgrade++;
            else if(bges==1)bgrade++;
            else if(bges==2)agrade++;
            else if(bges==4)agrade++;
        }else if(ages==4){
            if(bges==0)agrade++;
            else if(bges==1)agrade++;
            else if(bges==2)bgrade++;
            else if(bges==3)bgrade++;
        }

    }
    cout<<agrade<<" "<<bgrade;
    return 0;
}