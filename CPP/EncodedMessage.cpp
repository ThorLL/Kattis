#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
  string result;
  int n;
  cin >> n;
    for(int x = 0; x < n; x++){
      string input;
      cin >> input;
      int size = sqrt(input.size());
      char chars[(int)pow(size,2)];
      strcpy(chars, input.c_str());

      for(int i = size; i > 0; i--){
        for(int j = 0; j < size; j++){
            result += chars[i + j * size - 1];
        }
      }
      result += "\n";
    }
    cout << result;
}