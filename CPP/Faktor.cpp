#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double a, i;
  cin >> a >> i;
  i--;
  i += 0.001;
  cout << ceil(i*a);
}