#include <iostream>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
      int x;
      cin >> x;
      if (x < 0){cnt++;}
    }
    cout << cnt;
}