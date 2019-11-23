// #include<bits/stdc++.h> 

// using namespace std;

// #define SIZE 26

// // hash way in c lang

// void printCharWithFreq(string str) {
//     int n = str.size();
//     int freq[SIZE];
//     memset(freq,0,sizeof(freq));
//     for(int i = 0; i < n; i++) {
//         freq[str[i] - 'a']++;
//     }
//     for(int i = 0; i < n; i++) {
//         if(freq[str[i] - 'a'] != 0) {
//             cout << str[i] << " " << freq[str[i] - 'a'] << " " << endl;            
//             freq[str[i] - 'a'] = 0;
//         }
//     }
// }

// // lil bit efficient 
// void printCharWithFreqOpt(string str) {
//     int n = str.size();
//     int freq[SIZE];
//     memset(freq,0,sizeof(freq));
//     for(int i = 0; i < n; i++) {
//         freq[str[i] - 'a']++;
//     }
//     for(int i = 0; i < n; i++) {
//         cout << str[i] << " " << freq[str[i] - 'a'] << endl;
//     }
// }

// int main() {
//     string str = "nuralam";
//     printCharWithFreqOpt(str);
// }