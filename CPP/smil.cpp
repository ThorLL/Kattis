#include <iostream>
#include <string>
using namespace std;
int main(){
  string str;
  cin >> str;
  for(int i = 0; i < str.size(); i++){
    char c = str[i];
    if (c == ':' || c == ';') {
      i++;
      if (str[i] == '-' && str[i + 1] == ')'){
        i++;
        cout << (i - 2) << endl;
      }else if (str[i] == ')'){
        cout << (i - 1) << endl;
      }else{i--;}
    }
  }
}