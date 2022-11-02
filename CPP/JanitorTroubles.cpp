#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  double semi = (a + b + c + d) / 2;
  double maxArea = sqrt(
      (semi - a) *
      (semi - b) *
      (semi - c) *
      (semi - d)
      );
  cout << setprecision (17) << maxArea;
}