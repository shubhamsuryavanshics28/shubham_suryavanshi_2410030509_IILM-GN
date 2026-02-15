#include<iostream>
using namespace std;

int main(){
    int arr1[]={-7,-3,4,5,8};
    int n=5;
    
    int result[n];
    int i=0,j=n-1,k=n-1;
    while(i<=j and k>=0){
        if (abs(arr1[i])>abs(arr1[j]))
        {
            result[k]=arr1[i]*arr1[i];
            i++;
            k--;
        }
        else{
            result[k]=arr1[j]*arr1[j];
            j--;
            k--;
        }
    }
    for (int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    
    return 0;
}
