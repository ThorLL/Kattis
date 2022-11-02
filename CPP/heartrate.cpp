#include <iostream>
#include <string>
using namespace std;
int main (){
    int cases;
    cin >> cases;
    string result;
    while(cases-- > 0){
      double b, p;
      cin >> b >> p;
      double bpm = (60 * b) / p;
      double margin = 60 / p;
      result += to_string(bpm - margin) + " " + to_string(bpm) + " " + to_string(bpm + margin) + "\n";
    }
    cout << result;
}