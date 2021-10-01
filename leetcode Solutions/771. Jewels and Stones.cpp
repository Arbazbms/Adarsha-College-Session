class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int count=0;
        map<char, int> freq;
        //calculating frequqncies
        for(int i=0;i<stones.length();i++){
            freq[stones[i]]++;
        }
        
        
        //checking jewel with stones and increment count
        for(int i=0; i<jewels.length(); i++){
            auto it = freq.find(jewels[i]);
            if(it!=freq.end()){
                count += it->second; 
            }
        }
        
        return count;
    }
};


// stones- map     string jewels   count = 0;
// a -> 1           a A            1 
// A -> 2                           1 + 2 = 3
// b -> 4