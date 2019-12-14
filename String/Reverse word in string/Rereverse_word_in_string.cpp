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