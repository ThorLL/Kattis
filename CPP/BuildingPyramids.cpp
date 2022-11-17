#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, height = 0, last;
    cin >> n;
    for(int i = 1; n >= 0; i += 2){
      n -= pow(i,2);
      height++;
      last = i;
    }
    if(n < 0){
      n += pow(last, 2);
      height--;
    }
    cout << height;
}