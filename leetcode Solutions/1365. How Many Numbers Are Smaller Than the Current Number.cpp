class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> res;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                if(nums[i] > nums[j])
                    count++;
            }
            res.push_back(count);
            count = 0;
        }
        
        return res;
        
    }
};


// [8,1,2,2,3]
//  0 1 2 3 4  -> i
 
//  8 [8,1,2,2,3]  count = 4
      //insert count ; count = 0;
//  1 [8,1,2,2,3]   count 0
    
//   2 [8,1,2,2,3] count 1
     
//   2 [8,1,2,2,3]  count 1
      
//  3  [8,1,2,2,3]  count 3
 
 
 