// Question: Pascal’s Triangle Element Finder
// You are given two integers c and r, where:
// c represents the 1-based row number of Pascal’s Triangle (i.e., row 1 = top row 1, row 2 = 1 1, etc.)
// r represents the 0-based column index of an element in that row.
// Write a program to output the value at the r-th position of the (c-1)-th row of Pascal's Triangle.

#include <bits/stdc++.h>
using namespace std;

int midelement(int c,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(c-1-i);
        res=res/(i+1);
    }
    return res;
}

int main(){
    int c,r;
    cin>>c>>r;
    midelement(c,r);
    cout<<midelement(c,r)<<endl;
    return 0;
}