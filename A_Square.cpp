#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        vector<int> res;
        res.push_back(a);
        res.push_back(b);
        res.push_back(c);
        res.push_back(d);
        unordered_map<int,int> m;
        for(int i=0;i<res.size();++i){
            m[res[i]]++;
        }
        for(auto itr:m){
            if(itr.second==4){
                cout<<"YES"<<endl;
                break;
            }else{
                cout<<"NO"<<endl;
                break;
            }
        }
    }

    return 0;
}
