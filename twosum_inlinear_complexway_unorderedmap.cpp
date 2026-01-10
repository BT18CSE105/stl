class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> s;

        // Insert all elements first
        for (auto it : arr) {
            s[it]++;
        }

        bool temp = false;

        for (auto it : arr) {
            if (it * 2 != target) {
                if (s.find(target - it) != s.end()) {
                    // Using `temp = temp || true` here is unnecessary,
                    // because the existence of a valid pair is already confirmed.
                    return true;
                } else {
                    // Returning `temp` here would be incorrect,
                    // because a valid pair may still be found in later iterations.
                    temp = temp || false;
                }
            } else {
                if (s[it] > 1) {
                    // Same as above: once frequency > 1 is confirmed,
                    // the required condition is satisfied.
                    return true;
                } else {
                    // This does not change `temp`,
                    // and the search must continue for other elements.
                    temp = temp || false;
                }
            }
        }

        // If no valid pair was found in any iteration,
        // the accumulated result remains false.
        return temp;
    }
};
