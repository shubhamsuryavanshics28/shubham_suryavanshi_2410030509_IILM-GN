#include<iostream>
#include<vector>
using namespace std;
int f(int *arr, int idx, int n) {
    if(idx==n-1) {
        return arr[idx];
    }
    return max(arr[idx],f(arr,idx+1,n));
}


int main(){
    int arr[]={3,10,3,2,57};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = f(arr,0,n);
    
    cout<<"maximum value in the array:"<<result<<"\n";
    return 0;
}
