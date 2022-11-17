#include <iostream>
using namespace std;
int main(){
int x, y, v = 0;
cin >> x;
cin >> y;
if(x < 0){
 cout << (y < 0 ? 3 : 2);
}else{
  cout << (y < 0 ? 4 : 1);
}
}