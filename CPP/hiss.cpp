#include <iostream>
#include <string>
using namespace std;
int main (){
  string word, result = "no ";
  cin >> word;
  char last;
  for(char c: word){
    if (last == c && c == 's'){
        result = "";
        break;
    }
    last = c;
  }
  cout << result << "hiss";
}