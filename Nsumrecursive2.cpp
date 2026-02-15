#include<iostream>
#include<vector>
using namespace std;

int f(int n){
    if(n==0) return 0;
    return f(n-1) + ((n%2==0)?(-n):n);
}
int main(){
    long n;
    cout<<"enter the number: ";
    cin>>n;
    long result = f(n);    
    cout<<"sum is : "<<result;
    return 0;
}
