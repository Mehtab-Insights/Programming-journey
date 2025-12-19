#include<iostream>
using namespace std;
int main()
{
    int marks[4][2]={{12,56},{11,70},{42,78},{44,80}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}