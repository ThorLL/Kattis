#include <iostream>
using namespace std;
int main(){
  float n, k, sum = 0;
  cin >> n;
  cin >> k;
  int missing = n-k;
  for(int i = 0; i < k; i++){
    int v;
    cin >> v;
    sum += v;
  }
  cout << (sum + (-3 * missing))/n << endl;
  cout << (sum + (3 * missing))/n;
}