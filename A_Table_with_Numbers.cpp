#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int h;
        cin>>h;
        int l;
        cin>>l;
        vector<int> v(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        int count=0;
        for(int i=1;i<=h;++i){
            for(int j=1;j<=l;++j){
                auto it = find(v.begin(),v.end(),i);
                auto it2 = find(v.begin(),v.end(),j);
                if(it != v.end() && it2 != v.end()){
                    count++;
                    v.erase(it);
                    v.erase(it2);
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
