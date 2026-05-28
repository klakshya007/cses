#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >>n;
    long long result=1;
    long long mod = 1000000007;
    while(n!=0){
        result=(result*2)%mod;
        n--;
    }
    cout << result;
}