#include <iostream>
#include <string>
using namespace std;
int main(){
  string result;
  for(int i = 0; i < 5; i++){
    string name;
    getline(cin, name);
    if (name.find("FBI") != string::npos){
      result += to_string(i+1) + "\n";
    }
  }
  cout << ((result == "") ? "HE GOT AWAY!" : result.substr(0,result.size() - 1));
}