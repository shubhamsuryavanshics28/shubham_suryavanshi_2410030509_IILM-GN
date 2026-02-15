#include<iostream>
#include<vector>
using namespace std;

int power_recursive(int p,int q){
    if(q==0) return 1;
    if(q%2==0){
        int result = power_recursive(p,q/2);
        return result *result;
    }
    else{
        int result = power_recursive(p,(q-1)/2);
        return p * result*result;
    }
}

int f(int n,int d){
    if(n==0) return 0;
    return power_recursive(n%10,d) + f(n/10,d);
}
int main(){
    int n = 153;
    //cout<<"enter the number: ";
    //cin>>n;
    int no_of_digit = 0;
    int temp=n;
    while(temp>0){
        temp = temp/10;
        no_of_digit++;
    }
    int res = f(n,no_of_digit);
    if(res==n){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}
