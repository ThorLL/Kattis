#include <iostream>
#include <string>
using namespace std;
int main(){
    bool isBefore = true;
    int before = 0, after = 0;
    string input;
    cin >> input;
    for(char c : input){
      if(c == ')'){
        isBefore = false;
      }
      isBefore ? before++ : after++;
    }
    cout << (before != after ? "fix" : "correct");
}