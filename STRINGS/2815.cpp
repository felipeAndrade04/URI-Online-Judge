#include <iostream>

using namespace std;

int main() {
  int i;
  string frase;
  bool teste;

  teste = false;
  while(cin >> frase) {
    if (teste == true) cout << ' ';
    else teste = true;
    if (frase[0] == frase[2] && frase[1] == frase[3]) {
      for (i = 2; i < frase.length(); i++) {
        cout << frase[i];
      } 
    } else {
        cout << frase;
    }
  }
  cout << '\n';
}