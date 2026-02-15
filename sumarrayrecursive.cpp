#include<iostream>
#include<vector>
using namespace std;
int sum(int arr[], int idx, int n) {
    if (idx == n-1) return arr[idx];
    return arr[idx] + sum(arr, idx + 1, n);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int result = sum(arr,0,n);

    cout<<"sum of the array: "<<result<<"\n";
    return 0;
}
