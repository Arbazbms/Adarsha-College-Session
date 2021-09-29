class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        map<int, int> m;
        //calculating the frequencies
        for(int i=0; i<nums.size();i++){
            m[nums[i]]++;
        }

        // it.first(key) -> it.secod(value)
                // 1->1  ....
                // 2->2
                // 3->1   .....
        
        for(auto i : m){
            if(i.second == 1){
                sum = sum + i.first;
            }
        }
        
        return sum;
        
        
        
    }
};


// [1,1,1,2] -> 5  vs code

//[1,1,1,2] unique elements  2   - leetcode

// [1,2,3,2]

// it.first(key) -> it.secod(value)
                // 1->1  ....
                // 2->2
                // 3->1   .....

      //  1 + 3 = 4
