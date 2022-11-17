#include <iostream>
#include <cmath>
using namespace std;
const float g = 9.81;
int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
      double v, a, x, h1, h2;
      cin >> v >> a >> x >> h1 >> h2;
      a *= M_PI / 180;
      h1 += 1;
      h2 -= 1;
      double t = x / (v * cos(a));
      double y = v * t * sin(a) - (g * pow(t,2))/2;
      if(!(y < h2 && y > h1)) cout << "Not ";
      cout << "Safe" << endl;
  }
}