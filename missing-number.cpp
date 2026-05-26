#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map <int,int> mpp;
    for(int i=0;i<n-1;i++){
        int a;
        cin >> a;
        mpp[a]++;
    }
    for(int i=1;i<=n;i++){
        if(mpp[i]==0){
            cout << i;
            break;
        }
    }
    return 0;
}