// #include<bits/stdc++.h>

// using namespace std;

// #define SIZE 26

// int firstNonRepeatingChar(string str) {
//   int strlen = str.size(), i, index;
//   int freq[SIZE];
//   memset(freq, 0, sizeof(freq));
//   // Alternative of 2 line above int *freq = (int *)calloc(sizeof(int), SIZE);
//   for(i = 0; str[i]; ++i) 
//     freq[str[i] - 'a']++;
//   for(i = 0; i < strlen; i++) {
//     if(freq[str[i] - 'a'] == 1) {
//       index = i;
//       break;
//     }
//   }
//   return index;
// }


// int main() {
//   char str[] = "geeksforgeeks";
//   cout << "First non repeating character is " << str[firstNonRepeatingChar(str)];
// }