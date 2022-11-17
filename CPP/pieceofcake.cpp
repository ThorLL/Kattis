#include <iostream>
using namespace std;

int main(){
    int l, hc, vc;
    cin >> l >> hc >> vc;
    int h = ((l - hc) > hc) ? l - hc : hc;
    int v = ((l - vc) > vc) ? l - vc : vc;
    cout << 4*v*h;
return 0;
}
