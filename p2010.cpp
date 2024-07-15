//»ØÎÄÊıÅĞ¶Ï

#include<iostream>
#include<string>
using namespace std;
bool huiwen(int stat){
    string s=to_string(stat);
    int len=s.length();
    for(int i=0;i<(len/2);i++){
        if(s[i]!=s[len-i-1])return false;
    }
    return true;
}
bool runyear(int year){
    if(year%400==0||(year%4==0&&year%100!=0))return true;

    return false;
}
int main(){
    int stat,end;
    cin>>stat>>end;
    int num=0;
    while(stat<=end){
        int day=stat%100;
        int k=stat/100;
        int month=k%100;
        int year=k/100;

        if(huiwen(stat)){
            num++;
        }

        if(month==1||month==3||month==5||month==7||month==8||month==10)
            if(day==31){
                day=0;
                month++;
            }
        if(month==4||month==6||month==9||month==11)
            if(day==30){
                day=0;
                month++;
            }
        if(runyear(year)){
            if(month==2&&day==29){
                day=0;
                month++;
            }
        }else{
            if(month==2&&day==28){
            day=0;
            month++;
            }
        }
        
        if(month==12&&day==31){
            day=0;
            month=1;
            year++;
        }
        day++;
        stat=year*10000+month*100+day;
    }
    cout<<num;
    return 0;
}