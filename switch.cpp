#include<iostream>

using namespace std;

int main(){
    char button;
    cout<<"Input a character:";
    cin>>button;
    /*if(button=='a'){
        cout<<"Hello"<<endl;
    }if(button=='b'){
        cout<<"Namaste"<<endl;
    }if(button=='c'){
        cout<<"Ram Ram"<<endl;
    }if(button=='d'){
        cout<<"Hola"<<endl;
    }if(button=='e'){
        cout<<"Hi"<<endl;
    }*/
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"Ram Ram"<<endl;
        break;
    case 'd':
        cout<<"Hola"<<endl;
        break;
    case 'e':
        cout<<"Hi"<<endl;
        break;
    
    default:
    cout<<"Invalid Input"<<endl;
        break;
    }
}