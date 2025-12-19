#include<iostream>
using namespace std;
int main(){
    int arr[6]={99,55,2,-5,1,77};
    int smallest = INT_MAX;
    for(int i=0;i<6;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
    }
            // smallest = min(arr[i],smallest); // Also we use this this is a buliden function
        
    }
    cout<<"The smallest value is "<<smallest<<endl;
    return 0;
}