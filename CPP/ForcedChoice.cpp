#include <iostream>
#include <string>
using namespace std;
int main (){
  int cards, prediction, steps;
  cin >> cards >> prediction >> steps;
  string result;
  for(int i = 0; i < steps; i++){
    int choices;
    cin >> choices;
    bool keep = false;
    for(int j = 0; j < choices; j++){
      int x;
      cin >> x;
      if (prediction == x){
        keep = true;
      }
    }
    result += (keep ? "KEEP" : "REMOVE");
    result += "\n";
  }
  cout << result;
}