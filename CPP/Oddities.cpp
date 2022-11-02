#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;

    string result;
    for(int i = 0; i < n; i++){
      int x;
      cin >> x;
      result += to_string(x) + " is " + ((x % 2 == 0) ? "even" :  "odd") + "\n";
    }
    cout << result;
}