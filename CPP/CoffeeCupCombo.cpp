#include <iostream>
using namespace std;
int main(){
  int n, awake = 0;
  cin >> n;

  int coffees = 0;
  for(int i = 0; i < n; i++){
    char c;
    cin >> c;
    if (c == '1'){
      awake++;
      coffees = 2;
    } else{
        if(coffees > 0){
            awake++;
            coffees--;
        }
    }
  }
  cout << awake;
}