#include<iostream>
#include<vector>
#include<cmath>
#include<string.h>
using namespace std;

int main(){
    string a="",b="";
    vector<string> ans;
    while(true){
        getline(cin,a);
        if(a=="EOF")break;
        ans.push_back(a);
    }
    int num=0;
    for(int i=0;i<ans.size();i++){
        string cmp;
        getline(cin,cmp);
        int j=0;
        while(j<cmp.length()){
            if(cmp[j]=='<'){
                cmp.erase(j-1,2);
                j-=2;
            }
            j++;
        }
        j=0;
        while(j<ans[i].length()){
            if(ans[i][j]=='<'){
                ans[i].erase(j-1,2);
                j-=2;
            }
            j++;
        }
        for(j=0;j<ans[i].length();j++){
            if(ans[i][j]==cmp[j])num++;
        }
    }
    int time;
    string s;
    while(s!="EOF"){
        getline(cin,s);
    }
    cin>>time;
    cout<<round((double)num*60/(double)time);
    return 0;
}