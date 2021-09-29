#include<bits/stdc++.h>
using namespace std;

int main(){

    // find frequencies of each elemenent of an array

    // 1 - > 3
    // 2 -> 2
    // key -> value


    int a[10] = {1,1,1,2,2,2,2,2,2,2};
    int n = sizeof(a)/sizeof(a[0]);

    map<int ,int> m;

    for(int i=0;i<n;i++){
        m[a[i]]++;
    }

    // m[1] 3
    // m[2] 7

    for(auto it: m){
        cout<< it.first <<" --> " << it.second <<endl;
    }

    //it.first --> key
    //it.second --> value





    return 0;

}




// VECTOR: [1,2,3,3,3];

// SET [1,2,3];

//     MAP
 
//     KEY -> VALUE
//     KEY -> VALUE
//     KEY -> VALUE
//     KEY -> VALUE




//     HERE KEY -> UNIQUE

