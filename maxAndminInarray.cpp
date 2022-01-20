#include<iostream>
#include<climits>
using namespace std;


int main(){

    int n;
    cin>>n;

    int array[n];
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    for(int i=0; i<n; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }

        if(array[i] < min)
        {
            min = array[i];
        }
    }
    
    
    cout<<max<<" ";
    cout<<min;

    return 0;
}