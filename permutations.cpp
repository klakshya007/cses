#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    if(a==1){
        cout<<a;
        return 0;
    }
    if(a<=3){
    cout<<"NO SOLUTION";
    return 0;
    }
    for(int i=2;i<=a;i+=2){
        cout << i << " ";
    }
    for(int i=1;i<=a;i+=2){
        cout << i << " ";
    }
    return 0;
}