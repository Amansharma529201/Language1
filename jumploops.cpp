#include<iostream>
using namespace std;

int main(){
    int pocketMoney =3000;
    for(int date=1;date<=30;date++){
        if (date%2==0)
        {
            continue;        //use of contine is to skip the code     
        }
        if (pocketMoney ==0)
        {
            break;          //it is used to terminate the loop 
        }
        
        cout<<"Go out Today"<<endl;
        pocketMoney=pocketMoney-300;
    }

    return 0;
}