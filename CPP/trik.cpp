#include <iostream>
#include <string>
using namespace std;

void swapCups(bool cups[], int a, int b){
    bool temp = cups[a];
    cups[a] = cups[b];
    cups[b] = temp;
}

int main(){
  bool cups[3] = {1,0,0};
  string actions;
  cin >> actions;
  for(char c : actions){
    if (c == 'A'){
        swapCups(cups, 0, 1);
    } else if (c == 'B') {
        swapCups(cups, 1, 2);
    } else {
        swapCups(cups, 0, 2);
    }
  }
  for(int i = 0; i < 3; i++) {if (cups[i]) {cout << (i + 1);}}

}