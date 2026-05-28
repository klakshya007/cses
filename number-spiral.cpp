#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    for(long long i=0;i<n;i++){
        long long a,b;
        cin >> a >> b;
        long long prod,diff,solution,flagEven=0,flagMax=0;
        if(a>b){
            prod=a*a-a+1;
            diff=a-b;
            flagMax=1;
            if(a%2==0)flagEven=1;
        } 
        else {
            prod=b*b-b+1;
            diff=b-a;
            if(b%2==0)flagEven=1;
        }
        if((flagEven==0 && flagMax==1) || (flagEven==1 && flagMax==0))solution=prod-diff;
        else solution=prod+diff;
        cout << solution<<"\n";
    }
}