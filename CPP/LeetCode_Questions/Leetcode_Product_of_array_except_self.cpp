#include<iostream>//BruteForce O(n2)
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);

        //prefix=>ans
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }

        int suffix=1;
        //suffix
        for(int i=n-2;i>0;i--){
            suffix*=nums[i+1]; //ith suffix
            ans[i]*=suffix;
        }
        return ans;
        }
    };
int main(){
  Solution a;
  vector<int>nums={1,2,3,4};
  vector<int>result=a.productExceptSelf(nums);
  for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
  }
  return 0;
}



// #include<iostream>//BruteForce O(n2)
// #include<vector>
// using namespace std;
// class Solution{
// public:
// vector<int>productExceptSelf(vector<int>&nums){
//   int n=nums.size();
//   vector<int>ans(n,1);

//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       if(i!=j){
//         ans[i]*=nums[j];
//       }
//     }
//   }
//   return ans;
// }
// };
// int main(){
//   Solution a;
//   vector<int>nums={1,2,3,4};
//   vector<int>result=a.productExceptSelf(nums);
//   for(int i=0;i<result.size();i++){
//     cout<<result[i]<<" ";
//   }
//   return 0;
// }