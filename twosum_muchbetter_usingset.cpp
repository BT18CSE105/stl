class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
    bool isPresent = false;
    unordered_set<int> s;
    
    for(int i = 0; i< arr.size();i++){
                if(s.find(target - arr[i])!= s.end())
        {
         isPresent = isPresent || true;
        }
                else
        {
            isPresent = isPresent || false;
        }
        s.insert(arr[i]);


    }
    return isPresent;
    }
};
// too much verbose way of solving using set
// better way is to return true as soon as we find the pair
// and return false at the end if no pair is found
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_set<int> s;

        for (int x : arr) {
            if (s.find(target - x) != s.end())
                return true;
            s.insert(x);
        }
        return false;
    }
};
