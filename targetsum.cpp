#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr1[n];
    int target;
    cout<<"enter the target number:";
    cin>>target;
    for (int i=0;i<n;i++)
    {
        cout<<"enter the "<<i<<"element:"<<endl;
        cin>>arr1[i];
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(arr1[i]+arr1[j]==target){
                cout<<"("<<arr1[i]<<","<<arr1[j]<<")"<<endl;
            }
        }
        
    }
    

    return 0;
}
