#include<iostream>
#include<vector>
using namespace std;
void f(int idx, int n) {
    if (idx > n) return;
    cout << idx << " ";
    f(idx + 1, n);
}
int main(){
    int n = 5;
    f(1, n);   

    return 0;
}