#include<iostream>
using namespace std;
int Linearsearch(int arr[],int size,int target){
for(int i=0;i<size;i++){
    if(arr[i]==target){
        return i;
    }
}
return -1;
}
int main(){
    int arr[]={22,45,67,88,90};
    int size=5;
    int target=90;
    cout<<Linearsearch(arr,size,target)<<endl;
    return 0;
}