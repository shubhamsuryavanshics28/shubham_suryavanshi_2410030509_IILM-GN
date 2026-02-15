#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        vector<int> res;
        for(int i=1;i<=n;++i){
            res.push_back(i*2);
        }

        for(int i=0;i<res.size();++i){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
