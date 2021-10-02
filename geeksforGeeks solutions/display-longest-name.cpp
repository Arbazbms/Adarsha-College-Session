//link:   https://practice.geeksforgeeks.org/problems/display-longest-name0853/1#

class Solution{
    public:
    string longest(string names[], int n)
    {
        string largest = names[0];
        for(int i = 1; i<3; i++){
            if(names[i].length() > largest.length())   
                largest = names[i];
        }
        
        return largest;
        
    }
    
    
};

// largest = GeeksforGeeks;
// [aa, aa,aaa] n=3
// [aa,aaa,aaa,aaaa] n=4

// [ "Geek", "Geeks", "Geeksfor"]
   // 0         1        2            3               4

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}
  // } Driver Code Ends