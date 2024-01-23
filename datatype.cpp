#include<iostream>
using namespace std;
int main(){
    int a; // declaration 
    a = 14; // initialisation 
    
    cout<<"size of int "<<sizeof(a)<<endl;

    float b ; 
    cout<<"size of float"<<sizeof(b)<<endl;

    char c;
    cout<<"size of char"<<sizeof(c)<<endl;

    // talking about type modifier it works for the size modification in storage like when you can increase or decrease the size of the datatype
    short int si;
    long int li;
    cout<<"size of short"<<sizeof(si)<<endl;
    cout<<"size of long"<<sizeof(li)<<endl;
    return  0;

}