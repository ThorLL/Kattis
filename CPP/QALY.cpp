#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  float sum = 0;
  for(int i = 0; i < n; i++){
    float a, b;
    cin >> a;
    cin >> b;
    sum += a * b;
  }
  cout << sum;
}