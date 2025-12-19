#include<iostream> 
#include<vector> 
using namespace std;
void addTenToEach (vector<int>&nums){
    for(int i=0;i<nums.size();i++){
        nums[i]+=10;
    }
    for(int j=0;j<nums.size();j++){
        cout<<nums[j]<<" ";
    }
}
int main(){
vector<int>nums={1,2,3};
addTenToEach(nums);

}