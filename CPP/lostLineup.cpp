#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int people[n];
  people[0] = 1;
  for(int i = 2; i < n+1; i++){
    int space;
    cin >> space;
    people[space + 1] = i;
  }
  for(int i = 0; i < n; i++)cout << people[i] << " ";
  return 0;
}
