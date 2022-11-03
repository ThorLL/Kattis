#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
int main(){
    string ina, inb;
    cin >> ina >> inb;
    reverse(ina.begin(), ina.end());
    reverse(inb.begin(), inb.end());
    int a = stoi(ina), b = stoi(inb);
    cout << (a < b ? b : a);
}