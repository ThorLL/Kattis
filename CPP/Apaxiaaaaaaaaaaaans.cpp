#include <iostream>
#include <string>
using namespace std;
int main(){
  string str;
  cin >> str;

  char last;
  for(char c : str){
    if (last != c){
        cout << c;
    }
    last = c;
  }
}