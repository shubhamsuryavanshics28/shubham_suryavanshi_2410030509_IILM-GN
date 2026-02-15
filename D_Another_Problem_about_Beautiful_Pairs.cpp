#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n+1);
        for(int i=1;i<=n;i++) cin >> a[i];

        int count = 0;

        for(int i=1;i<=n;i++){
            if(a[i] > 2*n) continue;

            for(int j = i + a[i]; j <= n; j += a[i]){
                if(a[i] * a[j] == j - i){
                    count++;
                }
            }
        }

        cout << count << "\n";
    }
}
