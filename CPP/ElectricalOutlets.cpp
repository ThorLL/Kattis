#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int results[n];
    for(int i = 0; i < n; i++){
      int p, sum = 0;
      cin >> p;
      for(int j = 0; j < p; j++){
        int x;
        cin >> x;
        sum += x;
      }
      results[i] = sum - p + 1;
    }
    for(int i = 0; i < n; i++){
      cout << results[i] << endl;
    }
}