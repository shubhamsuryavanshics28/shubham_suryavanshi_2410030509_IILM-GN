#include <bits/stdc++.h>
using namespace std;

int sum(int x){
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;

        int count = 0;
        for(int y = x; y <= x + 100; ++y){
            int a = sum(y);
            if(x == y - a){
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
