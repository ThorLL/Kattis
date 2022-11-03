#include <iostream>
#include <string>
using namespace std;
int main(){
  int counter = 0;
  string letters;
  cin >> letters;
  for(int i = 0; i < letters.size(); i += 3){
    counter += (letters.at(i) != 'P') + (letters.at(i+1) != 'E') + (letters.at(i+2) != 'R');
  }
  cout << counter;
}