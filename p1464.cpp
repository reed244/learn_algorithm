#include<iostream>
using namespace std;
long long a,b,c;
long long f[21][21][21]={0};


long long f11(long long x,long long y,long long z){
    for(long long i=0;i<=x;i++){
        for(long long j=0;j<=y;j++){
            for(long long k=0;k<=z;k++){
                if(i==0||j==0||k==0)f[i][j][k]=1;
            }
        }
    }
    for(long long i=1;i<=x;i++){
        for(long long j=1;j<=y;j++){
            for(long long k=1;k<=z;k++){
                if(i<j&&j<k)
                f[i][j][k]=f[i][j][k-1]+f[i][j-1][k-1]-f[i][j-1][k];
                else
                f[i][j][k]=f[i-1][j][k]+f[i-1][j-1][k]+f[i-1][j][k-1]-f[i-1][j-1][k-1];
            }
        }
    }
    return f[x][y][z];
}


int main(){
    
    f11(20,20,20);

    cin>>a>>b>>c;
    for(;;cin>>a>>b>>c){
        if(a==-1&&b==-1&&c==-1)break;
        if(a<=0||b<=0||c<=0){
            cout << "w(" << a << ", " << b << ", " << c << ") = " << 1 << endl;
        }else if(a>20||b>20||c>20){
            cout << "w(" << a << ", " << b << ", " << c << ") = " << f[20][20][20] << endl;
        }else{
            cout << "w(" << a << ", " << b << ", " << c << ") = " << f[a][b][c] << endl;
        }
    }
    return 0;
}