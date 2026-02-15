#include<iostream>
#include<vector>
using namespace std;

bool f(int *h,int n,int k,int idx){
    if(idx>=n) return false;
    if(h[idx]==k) return true;
    return f(h,n,k,idx+1);
    
}
int main(){
    int arr[]={4,12,54,14,3,8,6,1};   
    int n=8;
    int k=12;

    int result = f(arr,n,k,0);

    if(f){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
    return 0;
}
