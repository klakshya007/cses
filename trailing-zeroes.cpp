#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long count = n/5;
    long long pow_five=25;
    while(pow_five<n){
        count+=n/pow_five;
        pow_five*=5; 
    }
    cout << count << "\n";
}