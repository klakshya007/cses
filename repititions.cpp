#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int maxCount=1;
    int count = 1;
    for(int i=1;i<(int)s.size();i++){
        if(s[i]!=s[i-1]){
            count=1;
        }
        else count++;
        if(maxCount<count){
            maxCount=count;
        }
    }
    cout << maxCount;
}