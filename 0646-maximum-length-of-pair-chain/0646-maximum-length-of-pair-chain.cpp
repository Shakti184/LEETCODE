class Solution {
public:
   int findLongestChain(vector<vector<int>>& pairs) {
    // Sort based on the second element of each pair
    sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    });

    int count = 1;
    vector<int> pointer = pairs[0];

    for (int i = 1; i < pairs.size(); i++) {
        if (pointer[1] < pairs[i][0]) {
            count++;
            pointer = pairs[i];
        }
    }

    return count;
}
// By sorting based on the second element of each pair, the algorithm guarantees that it will always pick the pair with the smallest ending value that can be added to the chain. This will maximize the chain length.






};