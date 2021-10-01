// link: https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int networth = 0;
        int max1 = 0;
        for(int i=0;i<accounts.size();i++){
            for(int j=0; j<accounts[i].size();j++){
                networth += accounts[i][j];
            }
            max1 = max(max1, networth);
            networth = 0;
        }
        return max1;
    }
};

// bank account matrix 2*3
// [
//     b1 b2 b3
//     [1,2,3], -> c1 -> 6
//     [3,2,1]  -> c2 -> 6
    
    
// ]