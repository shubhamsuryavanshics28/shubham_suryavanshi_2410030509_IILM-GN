#include<iostream>
using namespace std;

int main(){
    int n,m,p,q;
    cout<<"enter the rows of first array:";
    cin>>n;
    cout<<"enter the column of first array:";
    cin>>m;
    cout<<"enter the rows of second array:";
    cin>>p;
    cout<<"enter the column of second array:";
    cin>>q;
    int arr1[n][m];
    int arr2[p][q];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<"enter the "<<i<<","<<j<<" element of first array: ";
            cin>>arr1[i][j];
        }
        
    }
    for (int i=0;i<p;i++)
    {
        for (int j=0;j<q;j++)
        {
            cout<<"enter the "<<i<<","<<j<<" element of second array: ";
            cin>>arr2[i][j];
        }
        
    }
    int ans[n][q];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<q;j++)
        {
            int value=0;
            for (int k=0;k<p;k++)
            {
                value += arr1[i][k]*arr2[k][j];
                 
            }
            ans[i][j]=value;
        }
        
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<q;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    


    return 0;
}
