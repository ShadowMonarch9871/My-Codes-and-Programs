#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int ties(int a, int b) {
        int draws = 0;
        if (a < 3 && b < 3 && a == b) {
            draws = a;
        }
        else if (a > 3 && a != b) {
            draws = a % 3;
        }
        else if (b > 3 && a != b) {
            draws = b % 3;
        }
        else if ((a == 0 || b == 0) && (a % 3 == 0) ) {
            draws = 0;
        }
        else draws = a % 3;
        return draws;
    }
    int invert(string s) {
        int size = s.length();
        int  length0 = 0;
        int length1 = 0;
        int i = 0;
        int flag = 0;
        if (s[0] == '0') flag = 0;
        if (s[0] == '1') flag = 1;
        while (i < size) {
            if (s[i] == '1' && flag == 0) {
                length0++;
                flag = 1;
            }
            if (s[i] == '0' && flag == 1) {
                length1++;
                flag = 0;
            }
            i++;
        }
        if (s[size - 1] == '0') length0++;
        if (s[size - 1] == '1') length1++;
        if (length0 < length1) return length0;
        else return length1;

    }
    long long minOperations(long long A, long long B, long long K) {
        long long steps = 0;
        while (B > A) {
            if (B % K == 0) {
                long long nextB = B / K;
                if (nextB < A) {

                    steps += (B - A + K - 1) / K;
                    break;
                } else {

                    B = nextB;
                    steps++;
                }
            } else {

                steps += (B % K);
                B -= (B % K);
            }
        }
        return steps;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int size;
        cin >> size;
        string s;
        for (int i = 0; i < size; i++) {
            char input;
            cin >> input;
            s.push_back(input);
        }
        Solution sol;
        int draw = sol.invert(s);
        cout << draw << endl;
    }
}



