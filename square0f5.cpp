#include<iostream>
using namespace std;
int square(int x){
    for (int i=1;i<=x;i++)
    {
        cout<<(i*i)<<" ";
    }
}
int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    int sums = square(a);

    return 0;
}
