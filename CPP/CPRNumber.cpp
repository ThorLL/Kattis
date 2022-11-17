#include <iostream>
#include <string>
using namespace std;
int main(){
    int multipliers[10] = {4,3,2,7,6,5,4,3,2,1};
    string numbers;
    cin >> numbers;
    int sum = 0;
    for(int i = 0; i < 10; i++){
        char c = (i < 6 ? numbers[i] : numbers[i+1]);
        int x = c - '0';
        sum += (multipliers[i] * x);
    }
    cout << ((sum % 11 == 0) ? 1 : 0);
}