#include<iostream>
#include<vector>
using namespace std;

int f(int x,int y,int idx){
    if(x==1 or y==1) return 1;
    if(idx>=1){
        if(x%idx==0 and y%idx==0){
            return idx;
        }
        return f(x,y,idx-1);
    }
}
int main(){
    int x;
    int y;
    cout<<"enter the value of x: ";
    cin>>x;
    cout<<"enter the value of y: ";
    cin>>y;
    int a = min(x,y);
    int result = f(x,y,a);
    cout<<"result is: "<<result;     

    return 0;
}
