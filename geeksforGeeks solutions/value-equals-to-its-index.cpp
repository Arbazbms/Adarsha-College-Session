// https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1

class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here

            vector<int> res;
            for(int i=0; i<n; i++){
                if(arr[i] == i+1)
                    res.push_back(i+1);
            }
            
            return res;
	}
	
// val:	[15, 2, 45, 12, 7]
// in	:0+1   1+1   2    3  4
// 	 2 3
};

