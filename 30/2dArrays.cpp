#include<bits/stdc++.h>
using namespace std;

int main(){

   // int a[2] = {1,2}; // single dimention array
    int a1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            cout << a1[i][j] << " ";
        }
        cout << endl;
    }

    

    return 0;
}