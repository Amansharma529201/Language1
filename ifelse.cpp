#include<iostream>
using namespace std;

int main(){
    int saving ;
    cin>>saving;
    if(saving > 5000){
        if (saving>2000)
        {
            cout<<"I am raerly eligible\n";
        }
        else{
            cout<<"I am more eligible than mid\n";
        }
    }else if(saving>1000){
        cout<<"I am mid eligible\n";
    }else{
        cout<<"I am eligible\n";
    }
    return 0;
}