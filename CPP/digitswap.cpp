#include <iostream>
using namespace std;
int main(){
  int i, first, last;
  cin >> i;
  last = i % 10;
  first = (i - last)/10;
  cout << last << first << endl;
  return 0;
}