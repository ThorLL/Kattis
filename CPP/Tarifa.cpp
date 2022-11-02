#include <iostream>
using namespace std;
int main(){
  int x,n,sum;
  cin >> x;
  cin >> n;
  sum = x;
  for(int i = 0; i < n; i++){
    int u;
    cin >> u;
    sum += x - u;
  }
  cout << sum;
}