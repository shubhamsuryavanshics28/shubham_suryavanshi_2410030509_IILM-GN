#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[3]={1,2,3};
    int *ptr = &arr[0];
    
    cout<<*ptr++<<"\n";
    cout<<(*ptr)++<<"\n";
    cout<<*++ptr<<"\n";
    cout<<++*ptr<<"\n";

    return 0;
}
