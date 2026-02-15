#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    char arr[7]={'s','h','u','b','h','a','m'};
    for(int i=0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout<<arr[i];
    }    

    return 0;
}

