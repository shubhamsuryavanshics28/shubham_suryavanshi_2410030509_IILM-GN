#include<iostream>
using namespace std;
float area(int x){
    float result;
    result = 3.14*x*x;

    return result;
}
float circum(int x){
    float result;
    result = 2*3.14*x;

    return result;
}
int main(){
    float a;
    cout<<"enter the radius:";
    cin>>a;
    float area1=area(a);
    float circum1 = circum(a);
    cout<<"area of the circle:"<<area1<<"\n"<<"circumference of the circle:"<<circum1;

    return 0;
}

