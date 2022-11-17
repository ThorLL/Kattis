#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
      int k, d;
      cin >> k >> d;
      int candles = d;
      for(int j = 1; j <= d; j++){
        candles += j;
      }
      cout << k << " " << candles << endl;
    }
}