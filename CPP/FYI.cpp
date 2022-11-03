#include <iostream>
using namespace std;
int main (){
    char phoneNr[7];
    cin >> phoneNr;
    cout << ((phoneNr[0] == '5' && phoneNr[1] == '5' && phoneNr[2] == '5') ? 1 : 0);
}