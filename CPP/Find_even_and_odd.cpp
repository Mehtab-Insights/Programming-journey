#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a numbner :";
    cin>>num;  //Even how is count in 2 table and odd is how is not in 2 table
    if(num%2==0){
        cout<<"The number is even "<<endl;
    }
    else {
        cout<<"The number is odd "<<endl;
    }
    return 0;
}
