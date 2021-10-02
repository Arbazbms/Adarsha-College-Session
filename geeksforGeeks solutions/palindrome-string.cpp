// link: https://practice.geeksforgeeks.org/problems/palindrome-string0817/1

int isPalindrome(char S[])
{
    // Your code goes here
  
    int start = 0;
    int end = strlen(S)-1;
    
    while(start < end){
        if(S[start] != S[end])
            return 0;
            
        start ++;
        end--;
    }
    
    return 1;
    
    
}