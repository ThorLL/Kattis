#include <iostream>
#include <string>
using namespace std;
int main(){
  string input;
  cin >> input;
  bool foundAnA = false;
  for(char c : input){
    if(foundAnA){
        cout << c;
    }else if(c == 'a'){
        foundAnA = true;
        cout << 'a';
    }
  }
}