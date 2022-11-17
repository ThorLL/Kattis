#include <iostream>
#include <string>
using namespace std;
int main(){
  int monthLength[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
  string weekdays[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  int d, m;
  cin >> d >> m;
  cout << weekdays[(d + 2 + monthLength[m-1]) % 7];
}