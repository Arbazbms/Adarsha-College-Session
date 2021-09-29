#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int> s;

    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(2);


    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout << *it << " ";
    }
    // 1,2

    if(s.find(2)!=s.end()){
        cout << "found";
    }
    else{
        cout << "Not found";
    }

 
    return 0;
}