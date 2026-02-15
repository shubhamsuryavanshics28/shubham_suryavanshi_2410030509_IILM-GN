#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a = 0, j = 0;
        while(a < x){
            j++;
            if(n - j >= 0){
                n -= j;
                a++;
            } else {
                continue;
            }
        }
        cout << j << endl;
    }
    return 0;
}
