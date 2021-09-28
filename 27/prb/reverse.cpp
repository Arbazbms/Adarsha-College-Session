#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6] = {1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);

    cout << "original array: \n";
    for(int i = -0; i<n; i++){
        cout << a[i] << " ";
    }
    cout<<endl;


    int start  = 0;
    int end = n-1;

    while(start < end){
        swap(a[start], a[end]);
        start++;
        end --;
    }

    cout << "Reversed array: \n";
    for(int i = -0; i<n; i++){
        cout << a[i] << " ";
    }
    cout<<endl;

    return 0;
}