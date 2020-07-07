#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
  int n;
  set <char> alfabeto;
  string frase;

  scanf("%d", &n);

  getchar();

  while(n--) {
    getline(cin, frase);
    alfabeto.clear();
    for(char c : frase) {
      if(c != ',' && c != ' ') {
        alfabeto.insert(c);
      }
    }
    if(alfabeto.size() == 26) printf("frase completa\n");
    else if(alfabeto.size() >= 13) printf("frase quase completa\n");
    else printf("frase mal elaborada\n");
  }
}