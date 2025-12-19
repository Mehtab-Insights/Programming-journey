#include<iostream>
using namespace std;
int main()
{
 float arr[]={55,667,88,33,56,225,678,22,788,98,3345,223,778,99};
 int n =sizeof (arr)/4;
 int mx = arr[0];
 for(int i=1;i<n;i++)
 {
    if (arr[i]>mx)
     {
      mx=arr[i];
      }
 } 
 cout<<mx;
}