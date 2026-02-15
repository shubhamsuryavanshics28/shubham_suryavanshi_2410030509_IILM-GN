#include<iostream>
#include<vector>
using namespace std;
int power(int p,int q){
    if(q==0) return 1;
    if(q%2==0){
        int result = power(p,q/2);
        return result *result;
    }
    else{
        int result = power(p,(q-1)/2);
        return p * result*result;
    }
}


int main(){
    int p;
    cout<<"enter the value of base: ";
    cin>>p;
    int q;
    cout<<"enter the value pf power: ";
    cin>>q;
    int res = power(p,q);
    
    cout<<"answer is: "<<res<<"\n";

    return 0;
}