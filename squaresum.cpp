#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums;
    for (int i = 1; i <= 4; i++)
    {
        nums.push_back(i);
    }

    int n = nums.size();
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += nums[i - 1] * nums[i - 1];
        }
    }
    cout << sum << endl;
    return 0;
}
