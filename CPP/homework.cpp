#include <iostream>
#include <cstring>
using namespace std;

void getValue(int &sum, string s){
  if(s.find("-") != string::npos){
    int dashIndex = s.find("-");
    int size = s.size();
    string first = s.substr(0,dashIndex);
    string second = s.substr(dashIndex + 1,size);
    int a = stoi(first), b = stoi(second);
    sum += b - a + 1;
  }else {
    sum++;
  }
};

int main(){
  string in;
  cin >> in;
  int sum = 0;
  while(in.find(";") != string::npos){
    int pos = in.find(";");
    string s = in.substr(0,pos);
    in.erase(0, pos + 1);
    getValue(sum, s);
  }
  getValue(sum, in);
  cout << sum;
}