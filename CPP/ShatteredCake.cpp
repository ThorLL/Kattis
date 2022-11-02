#include <iostream>
using namespace std;
int main(){
  int w, n, area = 0;
  cin >> w;
  cin >> n;
  for(int i = 0; i < n; i++){
    int wi,li;
    cin >> wi;
    cin >> li;
    area += wi * li;
  }
  cout << area / w;
}