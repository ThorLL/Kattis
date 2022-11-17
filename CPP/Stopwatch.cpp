#include <iostream>
using namespace std;
int main(){
    int x,start,stop,sum = 0;
    bool isStarted = false;
    cin >> x;
    for(int i = 0; i < x; i++){
        int t;
        cin >> t;
        if(!isStarted){
            start = t;
        }else{
            sum += t - start;
        }
        isStarted = !isStarted;
    }
    if (x % 2 == 0){
        cout << sum;
    }else{
        cout << "still running";
    }
}