#include <iostream>
using namespace std;


int digitSum(int n){
    int sum = 0;
    while (n != 0) {
      sum = sum + n % 10;
      n = n / 10;
    }
    return sum;
}

int main(){
    int l, d, x, n = 0, m = 0;
    cin >> l;
    cin >> d;
    cin >> x;

    for(int i = l; i <= d; i++){
        if(digitSum(i) == x){
        cout << i << endl;
        break;
      }
    }
    for(int i = d; i >= l; i--){
        if(digitSum(i) == x){
        cout << i << endl;
        break;
      }
    }
}