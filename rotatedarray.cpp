#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(n));
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<"enter the "<<i<<","<<j<<" element";
            cin>>vec[i][j];
        }
        
    }
        

    return 0;
}
