#include <iostream>
using namespace std;
int main() { 
  int a, b;
  cout << "please enter the first number\n"; 
  cin >> a;
  cout << "please enter the second number\n";
  cin >> b;
  cout << "please enter the function you want to perform:\n+\n-\nx\n/\n%\n";
  char c = 0;
  cin >> c;
  switch(c){
    case '+': cout << a+b;
    break;
    case '-': cout << a-b;
    break;
    case 'x': cout << a*b;
    break;
    case '/': cout << a/b;
    break;
    case '%': cout << a%b;
    break;
  }
  return 0
}