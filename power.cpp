#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"enter the base:";
    cin>>a;
    cout<<"enter the power:";
    cin>>b;
    int product=1;
    for (int i=1;i<=b;i++)
    {
        product *= a;
    }
    cout<<"answer is:";
    cout<<product;

    return 0;
}

