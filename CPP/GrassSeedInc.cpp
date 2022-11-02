#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    double price, sum = 0;
    cin >> price;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
      double x, y;
      cin >> x >> y;
      sum += x * y;
    }
    cout << setprecision(10) << sum * price;
}