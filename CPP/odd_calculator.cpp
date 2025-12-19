#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number : ";
cin>>n;
int oddsum=0;
for(int i=1;i<=n;i++){
    if(i%2!=0){
        oddsum=oddsum+i;
        cout<<i<<" ";
    }
}
cout<<"The sum of odd is "<<oddsum<<endl;
return 0;
}

//The sum process in even


// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number :";
//     cin>>num;
//     int evensum=0;
//     for(int i=1;i<=num;i++){
//         if (i%2==0)
//         {
//             evensum=evensum+i;
//             cout<<i<<" ";
//         }
//     }
//     cout<<"The even sum is "<<evensum<<endl;
//     return 0;
// }