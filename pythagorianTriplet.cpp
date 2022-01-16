#include<iostream>
using namespace std;


int max(int x, int y, int z){

    if(x > y && x > z){
        return x;
    }
    else if(y > x && y > z){
        return y;
    }
    else{
        return z;
    }
}

int main(){

    int x,y,z;
    cin>>x>>y>>z;

    int a = max(x,y,z);
    int b,c;
    
    cout<<"Max number is "<<a<<endl;

    if(a == x){
        b = y;
        c = z;
    }
    else if(a == y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }

    int sqA = a*a;
    int sqB = b*b;
    int sqC = c*c;

    if( sqA == sqB + sqC){
        cout<<"This is Pythagorian triplet."<<endl;
    }

    else{
        cout<<"This is not Pythagorian triplet."<<endl;
    }

   

    return 0;
}