#include<bits/stdc++.h>

using namespace std;

// linear solution
int addDigit(int num) {
  int digitalRoot = 0;
  while(num) {
    digitalRoot += num % 10;
    num /= 10;
    if(num == 0 && digitalRoot > 9) {
      num = digitalRoot;
      digitalRoot = 0;
    }
  }
  return digitalRoot;
}


int addDigit(int num) {
    if(num < 10) return num;
    int digitalRoot = 0;
    while(num) {
        digitalRoot += (num % 10);
        num /= 10;
    }
    return addDigit(digitalRoot);
}

// constant time solution with the mathmatical concept digital root
int addDigit(int num) {
    if(num == 0) return 0;
    if(num % 9 == 0) return 9;
    return num % 9;
}

// one line solutin of digital root
int addDigit(int num) {
    return 1 + (num - 1) % 9;
}

int main() {
  cout << addDigit(38) << endl;
  return 0;
}