https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int max = *max_element(candies.begin(), candies.end());
        
        for(int i =0;i<candies.size();i++){
            if(candies[i] + extraCandies >= max)
                v.push_back(true);
            else
                v.push_back(false);
        }
        
        return v;
        
    }
};

// max = 5
// input candies: [2,3,5,1,3]    extracandies = 3
//             i:  0 1 2 3 4
            
//             [t,t,t,f,t]

// out: [true,true,true,false,true]
// understanding problem -> built mind logic - > write coding logic;