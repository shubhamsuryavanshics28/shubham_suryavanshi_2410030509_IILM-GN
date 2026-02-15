#include<iostream>
#include<vector>
using namespace std;

int f(int i,int j,int m,int n){
    if(i==m-1 && j==n-1) return 1;
    if(i>=m || j>=n) return 0;
    return f(i,j+1,m,n) + f(i+1,j,m,n);
}
int main(){
    int i,j,m,n;
    i=0;
    j=0;
    cout<<"enter the value of m: ";
    cin>>m;
    cout<<"enter the value of n: ";
    cin>>n;

    cout<<"total path is: ";
    cout<<f(i,j,m,n);    

    return 0;
}
