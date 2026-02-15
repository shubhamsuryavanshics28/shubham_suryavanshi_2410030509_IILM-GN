#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int lo = 0;
    int hi = lo + 1;
    int last = (int)a.size() - 1;
    int val1=0;
    int val2=0;
    while(lo < last){
        if (hi > last) {
            lo++;
            hi = lo + 1;
            continue;
        }
        if (a[lo]!=0 && a[lo]<a[hi] && ((a[hi]%a[lo])%2)==0) {
            val1 = a[lo];
            val2 = a[hi];
            break;
        }else {
            hi++;
        }
    }
    if(val1 == val2){
        cout<< -1<<endl;
        continue;
    }
    cout<<val1<<" "<<val2<<endl;
    }

    return 0;
}