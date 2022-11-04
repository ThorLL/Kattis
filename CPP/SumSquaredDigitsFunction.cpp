#include <iostream>
using namespace std;
int main(){
  int p;
  cin >> p;
  while(p--){
    int k, base, deci, sum = 0;
    cin >> k >> base >> deci;
    while (deci != 0){
      int r = deci % base;
      sum += (r*r);
      deci = deci / base;
    }
    cout << k << " " << sum << endl;
  }
}