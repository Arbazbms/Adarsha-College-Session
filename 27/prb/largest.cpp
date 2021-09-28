#include<bits/stdc++.h>
using namespace std;


int main(){

    int a[5] = {2,3,3,4};
    int min = a[0]; //2
    for(int i = 0; i < 5; i++){ //  sum = 2 5 8 12 13
        if(a[i] < min)
            min = a[i];
    }

    cout << "min : " << min;
    return 0;
}

// printf -> cout <<
//scanf -> cin >>