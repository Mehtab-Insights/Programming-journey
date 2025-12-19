#include<Iostream>
using namespace std;
void reverseArray(int arry[],int sz){
    int start=0,end = sz-1;
    while(start<end){
        swap(arry[start],arry[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[7]={5,2,1,8,7,2,4};
    int size=7;
    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl; 
    return 0;
}