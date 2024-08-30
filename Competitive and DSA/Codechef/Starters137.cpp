#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int spellSpice(pair<int,int>p){
        int max1=0;
        int max2=0;
        for(int i=)
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int size;
        cin >> size;
        vector<int> s(size);
        for (int i = 0; i < size; i++) {
            cin >> s[i];
        }
        Solution sol;
        int subarraySize = sol.largestEvenSumSubarraySize(s);

        cout << subarraySize << endl;

    }

    return 0;
}
