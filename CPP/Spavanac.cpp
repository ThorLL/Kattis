#include <iostream>
using namespace std;
int main(){
  int h, m, min, hour;
  cin >> h;
  cin >> m;
  if (m < 45){
    min = m + 15;
    cout << (h == 0 ? 23 : h - 1) << " " << min;
  }else{
    cout << h << " " << m - 45;
  }
}