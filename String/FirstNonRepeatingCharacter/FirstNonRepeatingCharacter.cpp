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

// WITH CPP MAP(hashmap)
// int firstNonRepeatingChar(string s) {
//   int strlen = s.size(), i, index = 0;
//   char ch;
//   map<char, int> m;
//   for(i = 0; i < strlen; i++) {
//     if(m.find(s[i]) == m.end()) {
//       m.insert({s[i],1});
//     }else{
//       m.find(s[i])->second++;
//     }
//   }
//   for(auto it : m) {
//     if(it.second == 1) {
//       ch = it.first ; break; 
//     }
//   }
//   for(i = 0; i < strlen; ++i) {
//     if(s[i] == ch) {
//       index = i; break;
//     }
//   }
//   return index;
// }


// int main() {
//   char str[] = "geeksforgeeks";
//   cout << "First non repeating character is " << str[firstNonRepeatingChar(str)];
// }