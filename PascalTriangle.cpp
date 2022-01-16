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

    for(int i = 0; i <= n; i++){
        for (int j = 0; j <= i; j++)
        {
            int ans = fact(i)/(fact(j)*fact(i-j));
            cout<<ans<< " ";
        }
        cout<<endl;
    }
}