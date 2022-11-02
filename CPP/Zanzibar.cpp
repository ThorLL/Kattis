#include <iostream>
#include <list>
using namespace std;

int main(){
    int tests;
    cin >> tests;
    int lb[tests];
    for(int i = 0; i < tests; i++){
      int last = 0, sum = 0;
      while(true){
        int t;
        cin >> t;
        if(t == 0){
          lb[i] = sum;
          break;
        }
        if(t > 2 * last && last != 0){
          sum += t - 2 * last;
        }
        last = t;
      }
    }
    for(int i = 0; i < tests; i++){
      cout << lb[i] << endl;
    }
    return 0;
}