#include <iostream>
#include <list>
#include <string>
using namespace std;
int main(){
    bool sure = true;

    string input;
    cin >> input;

    list<char> cards;
    for (char c: input) {
        cards.push_back(c);
    }

    cards.sort();

    char last;
    for(char c: cards){
        if(c == last){
            sure = false;
            break;
        }
        last = c;
    }
    cout << (sure ? 1 : 0);
}