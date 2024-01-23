#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0); // in this the body will work once no matter what and then it checks the condition
}