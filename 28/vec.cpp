#include<bits/stdc++.h>
using namespace std;

int main(){

    // declare vector
    vector<int> v;

    // inserting element 
    v.push_back(1);
    v.push_back(2);
    for(int i = 0; i<5;i++){
        v.push_back(i);
    }

    // same as array traversal
     for(int i = 0; i<v.size();i++){
        cout << v[i] << " ";
    }
    cout<<endl;

    // iterators
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // using auto
    for(auto element: v){
        cout << element << " ";
    }
    cout<<endl;

    cout<<"first element of an vector"<<v.front()<<endl;
    cout<<"last element of an vector"<<v.back()<<endl;
    cout<<"size of vector: "<<v.size()<<endl;




    return 0;
}