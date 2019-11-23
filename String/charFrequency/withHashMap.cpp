// #include <bits/stdc++.h>

// using namespace std;

// void printCharWithFreq(string s) {

//     map <char,int> m;
//     int strlen = s.size();
    
//     for(int i = 0; i< strlen; i++) {
//         if(m.find(s[i]) == m.end()) {
//             m.insert({s[i],1});
//             // m.insert(make_pair(s[i],1));
//             //m.insert(pair<char, int>(s[i],1));
//         } else {
//             m.find(s[i])->second++;
//         }
//     }

//     for( auto it = m.begin(); it != m.end(); it++) {
//         cout << it->first << " " << it->second << endl;
//     }

// }

// int main() {

//     string s = "nuralam";
//     printCharWithFreq(s);
//     return 0;

// }