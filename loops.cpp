#include<iostream>

using namespace std;

int main(){
    //this is a for loop example
     int n;
     cin>>n;

     int sum = 0;
     for(int counter=0; counter<=n; counter++){
        sum = sum + counter;
     }
     cout<<sum<<endl;
    return 0;
}