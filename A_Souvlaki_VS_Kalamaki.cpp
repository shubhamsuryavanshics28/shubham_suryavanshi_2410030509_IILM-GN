#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        string str="YES";
        sort(a.begin(),a.end());
        for(int i=1;i<n-1;i+=2){
            if(a[i]!=a[i+1]){
                str = "NO";
                break;
            }
        }
        cout<<str<<endl;
    }

    return 0;
}
