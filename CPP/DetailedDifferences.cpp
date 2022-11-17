#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string result;
    for(int i = 0; i < n; i++){
      string i1, i2;
      cin >> i1 >> i2;
      result += i1 + "\n" + i2 + "\n";
      for(int j = 0; j < i1.size(); j++){
        result += (i1.at(j) == i2.at(j) ? '.' : '*');
      }
      result += "\n";
    }
    cout << result;
}