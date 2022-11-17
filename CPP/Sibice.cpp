#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
  int n,w,h;
  cin >> n;
  cin >> w;
  cin >> h;
  string fits[n];
  int diag = sqrt(pow(w,2)+pow(h,2));
  for(int i = 0; i < n; i++){
    int m;
    cin >> m;
    fits[i] = m <= diag ? "DA" : "NE";
  }
  for(int i = 0; i < n; i++){
    cout << fits[i] << endl;
  }
}