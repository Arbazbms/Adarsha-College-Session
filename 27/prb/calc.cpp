#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n1,n2;
    char op; // +, -, * /

    cout<<"CALCULATOR"<<endl;
    cout<<"Enter 2 numbers"<<endl;
    cin>>n1;
    cin>>n2;
    cout<< "Enter Operand"<<endl;
    cin>>op;

    switch(op){
        case '+': 
                cout << "Resul is: " << n1+n2;
                break;

        case '-':
                cout<<"Result is : " << n1-n2;
                break;

        case '*':
                cout <<"Result is : "<< n1*n2;
                break;
            
        case '/' : 
                cout << "Result is: "<< n1/n2;
                break;
            
        default: 
                cout <<" operator not valid"<<endl;
                break;

    }


    return 0;
}
