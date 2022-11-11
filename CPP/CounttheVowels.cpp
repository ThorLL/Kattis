#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string in;
    getline(cin, in);
    short cnt = 0, i, j, l = in.length();
    char vowels[] = {'a', 'e', 'i', 'o', 'u'}, c[l];
    strcpy(c,in.c_str());
    for(i = 0; i < l; i++){
      if (c[i] < 97) c[i] += 32;
      for(j = 0; j < 5; j++) c[i] == vowels[j] ? cnt++ : cnt += 0;
    }
    cout << cnt;
    return 0;
}