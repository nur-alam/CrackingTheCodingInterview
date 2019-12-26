// #include<bits/stdc++.h>

// using namespace std;

// #define MAX 500

// int multiply(int f, int fact[], int size) {
//     int carry = 0;
//     for(int i = 0; i < size; i++) {
//         int prod = ( fact[i] * f ) + carry;
//         fact[i] = prod % 10;
//         carry = prod / 10;
//     }
//     while (carry)
//     {
//         fact[size] = carry % 10;
//         carry /= 10;
//         size++;
//     }
//     return size;
// }

// void factorial(int n) {
//     //int* fact = (int*)malloc(MAX*sizeof(int));
//     int fact[MAX];
//     fact[0] = 1;
//     int size = 1;
//     for(int f = 2; f<=n; f++)
//         size = multiply(f, fact, size);
//     for(int i = size - 1; i >= 0; i--)
//         cout << fact[i];
//     cout << endl;
// }

// void multiply(vector<long long int> &v,int n) {
//     int i = 0, j, carry, prod;
//     for(i = 1; i <= n; i++) {
//         carry = 0;
//         for(j = 0; j < v.size(); j++) {
//             prod = (v.at(j)*i) + carry;
//             v.at(j) = prod % 10;
//             carry = prod / 10;
//         }
//         while(carry) {
//             v.push_back(carry%10);
//             carry /= 10;
//         }
//     }
//     reverse(v.begin(),v.end());
//     for(auto i : v)
//         cout << i;
// }

// void extraLongFactorials(int n) {
//     vector<long long int> v;
//     v.push_back(1);
//     multiply(v, n);
// }

// int main() {
//     extraLongFactorials(5);
//     return 0;
// }