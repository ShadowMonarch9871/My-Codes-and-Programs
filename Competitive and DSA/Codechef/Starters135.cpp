#include <iostream>
#include <queue>
#include <unordered_set>

using namespace std;

long long minOperations(long long A, long long B, long long K) {
    long long steps = 0;
    while (B > A) {
        if (B % K == 0 && B / K >= A) {
            B /= K;
        } else {
            B--;
        }
        steps++;
    }
    return steps;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long A, B, K;
        cin >> A >> B >> K;
        cout << minOperations(A, B, K) << endl;
    }
    return 0;
}
