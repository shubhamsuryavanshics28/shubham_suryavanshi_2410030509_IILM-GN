#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,a,b;
        cin>>l>>a>>b;
        long long ans = a;
        for(int i=1;i<=l+1;++i){
            long long sum = (a + (i*b))%l;
            if(sum==ans){
                break;
            }else{
                ans = max(ans,sum);
            }
        }
        cout<<ans<<endl;
    }    

    return 0;
}
