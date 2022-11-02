#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
      int numberPower;
      cin >> numberPower;
      int power = numberPower % 10;
      int number = numberPower / 10;
      sum += pow(number,power);
    }
    cout << sum;
}