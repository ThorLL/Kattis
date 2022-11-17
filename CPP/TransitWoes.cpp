#include <iostream>
using namespace std;
int main(){
    int s, t, n, current = 0;
    cin >> s >> t >> n;
    current += s;
    int walks[n + 1], busses[n], intervals[n];

    for(int i = 0; i < (n + 1); i++) cin >> walks[i];
    for(int i = 0; i < n; i++) cin >> busses[i];
    for(int i = 0; i < n; i++) {
        cin >> intervals[i];
        while(((current + walks[i]) % intervals[i]) != 0) current++;
        current += walks[i] + busses[i];
    }
    current += walks[n];
cout << (current <= t ? "yes" : "no");
}