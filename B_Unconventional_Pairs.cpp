#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b=n;
        int ans=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i+=2){
            if(abs(a[i]-a[i+1])>ans){
                ans = max(ans,abs(a[i]-a[i+1]));
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
