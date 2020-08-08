Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Example:
```
Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.
```
Approach 1: Brute Force 

The easier approach is to add all digits of the number and check sum of digits is still greater then 9 or not. If greater then 9 then we need add up again.
```
int addDigit(int num) {
    int digitalRoot = 0;
    while(num > 0) {
       digitalRoot += num % 10;
       num /= 10;
       if(num == 0 && digitalRoot > 9) {
         num = digitalRoot;
         digitalRoot = 0;
       }
    }
    return digitalRoot;
}
```
  

Recursive approach
```
int addDigit(int num) {
    if(num < 10) return num;
    int digitalRoot = 0;
    while(num) {
        digitalRoot += (num % 10);
        num /= 10;
    }
    return addDigit(digitalRoot);
}
```
Approach 2: Mathematical: Digital Root
Digital root is a school math concept.
The digital root is the difference between the number and the largest multiple of 9 less than the number itself.

```
Digital Root of 1000 is 1. 
Largest multiple of 9 is less then 1000 = 9 * 11 = 999
So digital root = 1000 - 999 = 1;

Digital Root of 38 is 2;
Largest multiple of 9 is less then 38 = 9 * 4 = 36
So digital root = 38 - 36 = 2;
```
Actually if we divide any number with 9 then reminder will be the digital root.

```
Digital Root of 1000 is 1. by 1000 % 9 = 1
Digital Root of 38 is 2. by 38 % 9 = 2
```
But there is a catch if the number is itselt multiple of 9 what will happened then? Simple then 9 will be the digital root of that number.

```
int addDigit(int num) {
    if(num == 0) return 0;
    if(num % 9 == 0) return 9;
    return num % 9;
}
```

We can reduce it to one line solution :D.

```
int addDigit(int num) {
    return 1 + (num - 1) % 9;
}
```