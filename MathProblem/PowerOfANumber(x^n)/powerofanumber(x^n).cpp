#include<bits/stdc++.h>

using namespace std;

// typical ways to calculate (x^n) power of a number;
float power(float x, int y) {
  int temp = 1, i;
  for(i = 1; i <= y; i++)
      temp *= x;
  return temp;
}

/* Function to calculate x raised to the power y in O(logn)*/
float power(float x, int y)
{
   float temp;
   if(y == 0)
        return 1;
   temp = power(x, y/2);
   if(y % 2 == 0)
        return temp * temp;
   else {
        if(y > 0) 
            return x * temp * temp;
        else
            return (temp * temp) / x;
   }
}


int main() {
  cout << power(2, 4) << endl;
}