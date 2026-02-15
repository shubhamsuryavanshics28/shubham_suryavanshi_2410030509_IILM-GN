#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr1(n);
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        string s="";
        for(int i=0;i<n;++i){
            string s1 = s + arr1[i];
            string s2 = arr1[i] + s;
            s = min(s1,s2);
        }
        cout<<s<<endl;
    }    

    return 0;
}
