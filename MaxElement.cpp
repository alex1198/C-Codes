#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int maxI = INT_MIN;
    int array[n];

    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    for(int i=0; i<n; i++){
        if(maxI < array[i]){
            maxI = array[i];
        }
        cout<<maxI<<" ";
    }
    return 0;
}