#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    for(long long i=0;i<n;i++){
        long long a;
        long long b;
        cin >> a>>b;
        if((a+b)%3==0 &&(2*a>=b) && (2*b>=a) &&(2*b-a)/3 + (2*a-b)/3 == (a+b)/3) cout << "YES" << "\n";
        else cout <<"NO" <<"\n";
    }
}