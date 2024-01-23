#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i < 100; i++){
        if (i%3==0)
        {
            continue;   // yaha pe kya hua ki jo bhi number 3 se divide hoga vo skip ho jaayega 
        }
        
        cout<<i<<endl;
    }
}
// showing all the number from 1 to 100 removing the number that are divided by 3