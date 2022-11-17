#include <iostream>
#include <map>
using namespace std;
int main(){
    int hands;
    char suit;
    cin >> hands >> suit;

    map<char, int> dominant{{'A',11},{'K',4},{'Q',3},{'J',20},{'T',10},{'9',14},{'8',0},{'7',0}};
    map<char, int> nonDominant{{'A',11},{'K',4},{'Q',3},{'J',2},{'T',10},{'9',0},{'8',0},{'7',0}};
    int sum = 0;
    for(int i = 0; i < hands * 4; i++){
      char card, cardSuit;
      cin >> card >> cardSuit;
      sum += cardSuit == suit ? dominant[card] : nonDominant[card];
    }
    cout << sum;
}