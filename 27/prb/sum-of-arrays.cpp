#include<bits/stdc++.h>
using namespace std;


int main(){

    int a[5] = {2,3,3,4,1};
    int sum = 0;

    for(int i = 0; i < 5; i++){ //  sum = 2 5 8 12 13
        sum = sum + a[i];

    }

    cout << "sum : " << sum;
    return 0;
}

// printf -> cout <<
//scanf -> cin >>