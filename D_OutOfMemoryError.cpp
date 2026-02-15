#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        long long h;
        cin >> n >> m >> h;
        
        vector<long long> a(n), original(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            original[i] = a[i];
        }
        while(m--){
            int b;
            long long c;
            cin >> b >> c;
            b--;  
            a[b] += c;
            if(a[b] > h){
                a = original;
            }
        }
        for(long long x : a){
            cout << x << " ";
        }
        cout<<endl;
    }
    return 0;
}
