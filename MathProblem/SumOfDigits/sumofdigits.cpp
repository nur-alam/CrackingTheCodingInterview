#include<bits/stdc++.h>

int sumDigits(int num) {

  // int sum = 0;
  // while(num != 0) {
  //   sum += num % 10;
  //   num /= 10;
  // }
  // return sum;

  // recursive solution
  // if(num == 0) return 0;
  // else return num % 10 + sumDigits(num/10);

  // single line recursive solution
  return num == 0 ? 0 : num % 10 + sumDigits(num/10);
}

int main() {
  cout << sumDigits(1123) << endl;
}