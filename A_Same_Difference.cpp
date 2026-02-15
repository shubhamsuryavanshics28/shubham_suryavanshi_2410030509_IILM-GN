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
        string s;
        cin>>s;
        vector<int> res(250,0);
        for(int i=0;i<s.length();i++){
            int num = (int)s[i];
            res[num]++;
        }
        int mx=0;
        for(int f:res){
            mx = max(mx,f);
        }
        int ans = s.length()-mx;
        cout<<ans<<endl;
    }

    return 0;
}
