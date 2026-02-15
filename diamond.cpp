#include<iostream>
using namespace std;

int main(){
    int n=5;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<(n-i);j++)
        {
            cout<<" ";
        }
        for (int j=0;j<(2*i-1);j++)
        {
            char ch = (char)('A'+ j);
            cout<<ch;
        }
        cout<<endl;
    }
    for (int i=n+1;i<(2*n-1);i++)
    {
        for (int j=0;j<(i-n);j++)
        {
            cout<<" ";
        }
        for (int j=0;j<2*(2*n-i)-1;j++)
        {
            char ch = (char)('A'+ j);
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;

}