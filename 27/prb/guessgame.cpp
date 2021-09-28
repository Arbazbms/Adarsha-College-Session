#include<bits/stdc++.h>
using namespace std;

int main(){
 
    int secretNumber = 7;
    int guessLimit = 2;
    int guessCount = 0;
    int guess;
    bool outOfGuesses = false;
    while(secretNumber!=guess && !outOfGuesses){
        if(guessCount < guessLimit){
            cout<< "Enter your Guess Number" <<endl;
            cin >> guess;
            guessCount++;


        }else{
            outOfGuesses = true;
        }
    }

    if(outOfGuesses)
        cout << "You LOOSE"<<endl;
    else    
        cout << "You Win" <<endl;
        
    return 0;
}