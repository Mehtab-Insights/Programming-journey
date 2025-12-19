#include<iostream>
using namespace std;
int arryplus(int arry[],int sz){
    int sum=0;
    for(int i=0;i<sz;i++){
        sum+=arry[i];
    }
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<arryplus(arr,size);
    return 0;
}