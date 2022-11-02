#include <iostream>
#include <string>
using namespace std;
int main(){
int n;
cin >> n;
string result;
for(int i = 0; i < n; i++){
int r, e, c;
cin >> r >> e >> c;
    if ((e - c) > r){
      result += "advertise\n";
    }else if ((e - c) < r){
result += "do not advertise\n";
    }else{
result += "does not matter\n";
    }
}
cout << result;
}