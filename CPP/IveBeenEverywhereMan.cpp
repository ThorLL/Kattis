#include <iostream>
#include <map>
#include <string>
using namespace std;
int main (){
    int t;
    cin >> t;
    string result;
    for(int i = 0; i < t; i++){
      int n;
      cin >> n;
      map<string, int> m;
      for(int j = 0; j < n; j++){
        string city;
        cin >> city;
        m.insert(pair<string,int>(city, 0));
      }
    result += to_string(m.size()) + "\n";
    }
    cout << result;
}