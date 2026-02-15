#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; ++i){
            cin >> v[i];
        }

        int a = *max_element(v.begin(), v.end());
        int i = 0;

        while(i < n){
            if(v[i] == a){
                if(i + 1 < n)
                    a = *max_element(v.begin() + i + 1, v.end());
                i++;
            }else{
                int idx = max_element(v.begin() + i, v.end()) - v.begin();
                reverse(v.begin() + i, v.begin() + idx + 1);
                break;
            }
        }

        for(int x : v){
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
