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

        int x;
        cin>>x;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int lo = 0;
        int hi = lo+1;
        while (lo < (int)a.size() - 1) {
                if (hi > (int)a.size()-1) {
                lo++;
                hi = lo + 1;
                continue;
            }
            if (abs(a[hi] - a[lo])%2==0) {
                int mid = (a[lo] + a[hi]) / 2;
                a.erase(a.begin()+hi);
                a.erase(a.begin()+lo);
                a.push_back(mid);
            } else {
                hi++;
            }
        }
        if(a[0]==x){
            cout<<"yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}
