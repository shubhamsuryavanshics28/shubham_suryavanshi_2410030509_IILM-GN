#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int a;
        cin>>a;
        
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        int count=0;
        int a = n/2;
        count = (v[a]+v[a-1])/2;
        cout<<count<<endl;
    }    

    return 0;
}
