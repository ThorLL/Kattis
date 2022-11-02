#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char in[100];
    cin >> in;
    char *c;
    c = strtok(in,"-");
    while (c != NULL)
    {
      cout << c[0];
      c = strtok (NULL, "-");
    }
}