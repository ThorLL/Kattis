#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
  string in;
  cin >> in;

  double ws = 0, ll = 0, ul = 0, s = 0, size = in.size();
  for(char c : in){
    if(c == '_'){ws++;}
    else if (c >= 'a' && c <= 'z'){ll++;}
    else if (c >= 'A' && c <= 'Z'){ul++;}
    else {s++;}
  }
cout << setprecision(20) << ws / size << endl << ll / size << endl << ul / size << endl << s / size;
}