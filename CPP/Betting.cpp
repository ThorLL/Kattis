#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    double n;
    cin >> n;
    cout << setprecision (11) << 100/n;
    cout << endl;
    cout << setprecision (11) << 100/(100-n);
}