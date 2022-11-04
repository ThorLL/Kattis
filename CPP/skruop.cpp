#include <iostream>
#include <string>
using namespace std;
int main(){
    int base = 7, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
      string _, dir;
      cin >> _ >> dir;
      if (dir == "op!") {
          base < 10 ? base++ : base += 0;
        } else {
          base > 0 ? base-- : base += 0;
        }
    }
    cout << base;
}