#include<iostream>
#include<vector>
using namespace std;

int f(int n){
    if(n==0) return 0;
    else if (n%2==0)
    {
        return (-n + f(n-1));
    }
    else{
        return n + f(n-1);
    }
}
int main(){
    long n;
    cout<<"enter the number: ";
    cin>>n;
    long result = f(n);    
    cout<<"sum is : "<<result;
    return 0;
}
