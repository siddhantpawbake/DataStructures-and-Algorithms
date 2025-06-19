/*#QUESTION:
    you are given a row return that row in reference to pascals triangle*/\

#include <bits/stdc++.h>
using namespace std;

int midelement(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}

int main(){
    int row;
    cin>>row;
    int n=row-1;
    for(int i=0;i<=n;i++){
        cout<<midelement(n,i)<<" ";
    }
    return 0;
}