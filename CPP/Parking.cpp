#include <iostream>
using namespace std;

int main(){
    short t, n;
    cin >> t;
    while(t--){
        cin >> n;
        short max = -32766, min = 32767;
        while(n--){
            short x;
            cin >> x;
            max < x ? max = x : max = max;
            x < min ? min = x : min = min;
        }
        cout << (max - min + max - min) << endl;
    }
    return 0;
}