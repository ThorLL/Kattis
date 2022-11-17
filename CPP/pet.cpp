#include <iostream>
using namespace std;
int main(){
  int winner = 0,winnerPoints = 0;
  for(int i = 1; i < 6; i++){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = a+b+c+d;
    if(sum > winnerPoints){
      winnerPoints = sum;
      winner = i;
    }
  }
  cout << winner << " " << winnerPoints;
  return 0;
}
