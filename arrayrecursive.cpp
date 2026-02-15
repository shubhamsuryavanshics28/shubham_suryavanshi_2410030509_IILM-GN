#include<iostream>
#include<vector>
using namespace std;
void f(int *arr,int idx,int n){
    if(idx==n) return;

    cout<<arr[idx]<<"\n";
    f(arr,idx+1,n);
}

int main(){
    int arr[]={12,34,23,1,2,43,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    f(arr,0,n);    

    return 0;
}
