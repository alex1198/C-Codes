#include<iostream>
using namespace std;

int fact(int n){

    int f = 1;
    for(int i = n; i>=1; i--){
        f = f * i;
    }
    return f;
}

int main(){
    
    int n;
    cin>>n;

    int ans = fact(n);

    cout<<"The factorial is "<<ans;

    return 0;
}