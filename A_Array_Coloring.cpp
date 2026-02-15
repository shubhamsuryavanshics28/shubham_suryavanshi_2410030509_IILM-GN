#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        string ans="YES";
        for(int i=0;i<v.size();++i){
            if((v[i]%2!=0 and v[i+1]%2!=0) or (v[i]%2==0 and v[i+1]%2==0)){
                ans = "NO";
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
