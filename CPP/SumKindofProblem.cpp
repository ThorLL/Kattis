#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  while(n--){
    int k, x, sum, odd, even;
    cin >> k >> x;
    odd = x * x;
    even = odd + x;
    sum = even / 2;
    cout << k << " " << sum << " " << odd << " " << even << endl;
  }
}