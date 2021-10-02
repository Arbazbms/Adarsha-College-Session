// link : https://practice.geeksforgeeks.org/problems/count-pair-sum5956/1

class Solution
{
  public:
    int countPairs(int arr1[], int arr2[],  int m, int n, int x) 
    { 
        int count = 0;
        set<int> v;
        
        for(int i=0; i<n; i++){
            v.insert(arr2[i]);
        }
        
        for(int i=0; i<m; i++){
            if(v.find(x-arr1[i]) != v.end()){
                count++;
            }
        }
        
        
        return count;
        
        
        
    } 
};