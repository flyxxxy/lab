#include <iostream>
using namespace std;
int main() {
  float num1;
  float num2;
  float res;
  char oper;
  
  cout << "enter number 1" << endl;
  cin >> num1;
  cout << "enter number 2" << endl;
  cin >> num2;
  cout << "enter '+' or '-' or '*' or '/' " << endl;
  cin >> oper;
  
  while (oper != '+' && oper != '-' && oper != '*' && oper != '/') {
    cout << "enter '+' or '-' or '*' or '/' " << endl;
    cin >> oper;
  }   

  if (oper == '+') {
    res = num1 + num2;
    cout << res;
  } 
  else if (oper == '-') {
    res = num1 - num2;
    cout << res;
  }
  else if (oper == '*') {
    res = num1 * num2;
    cout << res;
  }
  else if (oper == '/') {
    while (num2 == 0){
      cout << "enter number2 != 0 " << endl;
      cin >> num2;
    }
    res = num1 / num2;
    cout << res;
  }
  return 0;
}
