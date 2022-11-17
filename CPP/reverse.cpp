#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int i, numbers[n];
  for(i = 0; i < n; i++) cin >> numbers[i];
  while(n--) cout << numbers[n] << " ";
  return 0;
}
