// cpp solution

// #include <bits/stdc++.h>
// using namespace std;

// void reverse(string& str, int start, int end) {
//   while(start < end) {
//     // swap(str[start++], str[end--]);
//     char tempChr = str[start];
//     str[start++] = str[end];
//     str[end--] = tempChr;
//   }
// }

// void reverseWord(string& str) {
//   reverse(str, 0, str.size() - 1);
//   int start = 0, end = 0, len = str.size();
//   while(end < len) {
//     if(str[end] == ' ') {
//       reverse(str, start, end - 1);
//       start = end + 1;
//     }
//     end++;
//   }
//   reverse(str, start, end - 1);
// }

// int main() {
//   // string arrStr = {'p', 'e', 'r', 'f', 'e', 'c', 't', 
//   //  ' ', 'm', 'a', 'k', 'e', 's', ' ', 
//   //  'p', 'r', 'a', 'c', 't', 'i', 'c', 'e'};
//   string arrStr = "perfect makes practice";
//   reverseWord(arrStr);
//   cout << arrStr << endl;
// }



// js solution 

// let arrStr = ['p', 'e', 'r', 'f', 'e', 'c', 't', ' ', 'm', 'a', 'k', 'e', 's', ' ', 'p', 'r', 'a', 'c', 't', 'i', 'c', 'e'];
// //to ['p', 'r', 'a', 'c', 't', 'i', 'c', 'e', ' ', 'm', 'a', 'k', 'e', 's', ' ', 'p', 'e', 'r', 'f', 'e', 'c', 't'];

// function reverse(str, start, end) {
//   while(start < end) {
//     let char = str[start];
//     str[start++] = str[end];
//     str[end--] = char;
//   }
//   return str;
// }

// function reverseEachWords(arrStr) {
//   reverse(arrStr, 0, arrStr.length);
//   let start = 0, end = 0;
//   while(end < arrStr.length) {
//     if(arrStr[end] == ' ') {
//       reverse(arrStr, start, end - 1);
//       start = end + 1;
//     }
//     end++;
//   }
//   reverse(arrStr, start, end - 1);
// }
// reverseEachWords(arrStr);
// console.log(arrStr);