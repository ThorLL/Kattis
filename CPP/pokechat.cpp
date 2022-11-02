#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string stringChars;
    getline(cin, stringChars);
    char chars[stringChars.size() + 1];
    strcpy(chars,stringChars.c_str());

    string stringIds;
    cin >> stringIds;
    char ids[stringIds.size() + 1];
    strcpy(ids,stringIds.c_str());

    string message;
    for(int i = 0; i < sizeof(ids); i += 3){
      char id[3];
      id[0] = ids[i];
      id[1] = ids[i + 1];
      id[2] = ids[i + 2];
      int idI = atoi(id);
      message += (chars[idI - 1]);
    }
    cout << message;
}