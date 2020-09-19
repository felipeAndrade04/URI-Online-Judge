#include <iostream>
#include <stack>

using namespace std;

int main() {
  int n, qtd;
  string entrada;

  stack<char> pilha;
  cin >> n;

  while (n--) {
    while(!pilha.empty()) pilha.pop();
    qtd = 0;
    pilha.push('-');

    cin >> entrada;
    for (char c: entrada) {
      if (c != '.') {
        if (c == '>' && pilha.top() == '<') {
          qtd++;
          pilha.pop();
        } else {
          pilha.push(c);
        }
      }
    }
    cout << qtd << endl;
  } 
}