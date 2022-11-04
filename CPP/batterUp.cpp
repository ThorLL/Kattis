#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int n;
double atBat, sum = 0;
  cin >> n;
  atBat = n;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    x < 0 ? atBat-- : sum += x;
  }
cout << setprecision(12) <<sum / atBat;
}