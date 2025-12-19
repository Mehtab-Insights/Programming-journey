#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a = *b;
    *b=temp;
}
int main ()
{
    int m=55;
    int n=60;
    cout<<m<<","<<n<<endl;
    swap(&m,&n);
    cout<<m<<","<<n<<endl;
    return 0;
}