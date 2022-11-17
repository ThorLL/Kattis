#include <iostream>
using namespace std;

int boxing(int s, int i, int p, int h){
  int nextH = h * 2 - 1;
  return p == i ? s * 4 - nextH * 2 - 1 : boxing(s * 4 - nextH * 2 - 1, i, p + 1, nextH);
}

int main(){
    int i;
    cin >> i;
    cout << boxing(4,i,1,2);
}