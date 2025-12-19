#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int>arr(5);
arr[0]=6;
arr[1]=8;
arr[2]=3;
arr[3]=1;
arr[4]=10;
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
sort(arr.begin(),arr.end());
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}
}