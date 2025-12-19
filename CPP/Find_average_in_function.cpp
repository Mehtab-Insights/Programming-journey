#include<iostream>
using namespace std;
int ave(int arry[],int size){
    int sum=0;

    cout<<"Eneter "<<size<<" Number"<<endl;
    for(int i=0;i<size;i++){
        cin>>arry[i];
    }

    for(int j=0;j<size;j++){
        sum=sum+arry[j];
    }
float average =static_cast<float>(sum)/size;
return average;
}
int main(){
    int pak[5];
cout<<"The average "<<ave(pak,5);
    return 0;
}