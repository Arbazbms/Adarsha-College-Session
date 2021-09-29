#include<bits/stdc++.h>
using namespace std;

int main(){


    int a[5] = {1,2,3,3,3};
    int n = sizeof(a)/sizeof(a[0]);

    //declaring set of type int 
    set<int> s;

    // inserting arary elements to set to remove duplicates
    for(int i =0; i<n; i++){
        s.insert(a[i]);
    }

    
    // printing unique set elements
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout << *it << " ";
    }



    return 0;
}