#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(string a,string b){
    return a+b>b+a;
}
int main(){
    int n;
    cin>>n;
    vector<string> str;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        str.push_back(s);
    }
    
    sort(str.begin(),str.end(),cmp);

    for(auto i :str){
        cout<<i;
    }
    return 0;
}