#include<iostream>
#include<vector>
using namespace std;
int power(int p,int q){
    if(q==0) return 1;
    return p * power(p,q-1);
}


int main(){
    int p;
    cout<<"enter the value of base: ";
    cin>>p;
    int q;
    cout<<"enter the value pf power: ";
    cin>>q;
    int result = power(p,q);
    
    cout<<"answer is: "<<result<<"\n";

    return 0;
}