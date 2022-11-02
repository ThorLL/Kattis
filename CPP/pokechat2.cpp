#include <iostream>
#include <cstring>
using namespace std;
int main(){
  string chars, message, ids;
  getline(cin, chars);
  cin >> ids;
  for(int i = 0; i < ids.size(); i += 3){
    int id = stoi(ids.substr(i,3));
    message += chars.at(id-1);
  }
  cout << message;
}