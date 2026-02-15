#include<iostream>
#include<cmath>
using namespace std;
int sum(int x,int y){
    int add = x + y;
    return add;
}

int main(){
    int a,b;
    cout<<"enter the first element:";
    cin>>a;
    cout<<"enter the second element:";
    cin>>b;
    int add=sum(a,b);
    cout<<add;

    return 0;
}