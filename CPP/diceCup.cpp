#include <iostream>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  int size = n+m+1;
  int count[size];
  for(int i = 0; i < size; i++){count[i] = 0;}
  for(int i = 1; i <= n; i++){
      for(int j = 1; j <= m; j++){
            count[i+j] = 1 + count[i+j];
      }
  }
  int highest = 0;
  for(int i = 0; i < size; i++){
    if (count[i] > highest) {highest = count[i];}
  }
  int counter = 0;
  for(int i = 1; i < size; i++){
    counter++;
    if (count[i] == highest) {cout << counter << endl;}
  }
}