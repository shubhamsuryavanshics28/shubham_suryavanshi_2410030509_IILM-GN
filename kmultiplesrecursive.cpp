#include<iostream>
#include<vector>
using namespace std;
void f(int num,int k){
    if(k < 1) return;
    f(num,k-1);
    cout<<(num*k)<<" ";

}
int main(){
    int num;
    cout<<"enter the value of num: ";
    cin>>num;
    int k;
    cout<<"how many multiples you want: ";
    cin>>k;
    f(num,k);   

    return 0;
}