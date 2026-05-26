#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long>arr(n);
    long long count=0;
    for(int i=0;i<n;i++){
        long long a;
        cin >> a;
        arr[i]=a;
        if(i==0)continue;
        if(arr[i]<arr[i-1]){
            long long diff=arr[i-1]-arr[i];
            count+=diff;
            arr[i]=arr[i-1];
        }
    }
    cout<<count;
    return 0;
}