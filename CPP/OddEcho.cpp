#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string words[n];
    int counter = 0;
    for(int i = 0; i < n; i++){
      char word[100];
      cin >> word;
      if (i % 2 == 0){
        words[counter] = word;
        counter++;
      }
    }
    for(int i = 0; i < counter; i++){
        cout << words[i] << endl;
    }
}