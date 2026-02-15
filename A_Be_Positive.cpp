#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b = n;
        int ans = 0;
        int product = 1;
        for(int i=0;i<b;i++){
            if(a[i]==0){
                a[i]=1;
                ans++;
            }
        }
        for(int i=0;i<b;i++){
            product *= a[i];
        }
        if(product == -1){
            cout<<(ans+2)<<endl;
        }else{
            cout<<ans<<endl;
        }
    }
    
    return 0;
}
