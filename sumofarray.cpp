#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int sum = 0;
    for (int i=0;i<5;i++)
    {
        cout<<"enter the "<<i<<" element"<<endl;
        cin>>arr[i];
    }
    for (int i=0;i<5;i++)
    {
        sum += arr[i];
    }
    cout<<"sum of the element of the array:";
    cout<<sum;


    return 0;
}