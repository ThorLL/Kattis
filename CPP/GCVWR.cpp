#include <iostream>
using namespace std;
int main (){
  int g, t, n, sum;
  cin >> g >> t >> n;
  sum = (g - t) * 0.9;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    sum -= x;
  }
  cout << sum;
}