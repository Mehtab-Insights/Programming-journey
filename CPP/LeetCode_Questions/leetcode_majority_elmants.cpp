// Brute force appraoch
#include<iostream>
#include<vector>
using namespace std;
class solution{ //O(n2)
public:
int majorityElement(vector<int>&nums){
    int n=nums.size();
    for(int val : nums){
        int frq=0;
    
    for(int el : nums){
        if(el==val){
            frq++;
        }
    }
    if (frq > n/2)
    {
        return val;
    }
    
}
return 0;
}
};
int main(){
    vector<int>vec={2,2,1,1,2,2,1};
    solution a;
    int result=a.majorityElement(vec);
    cout<<result;
    return 0;
}



//Optimize appraoch

// #include<iostream>  //O(nlogn)
// #include<vector>
// #include<algorithm>
// using namespace std;
// class solution{
// public:
// int majorityElement(vector<int>&nums){
//     int n=nums.size();

//     //sort
//     sort(nums.begin(),nums.end());
     
//     //freq count
//     int freq=0,ans =nums[0];
//     for(int i=0;i<n;i++){
//         if(nums[i]==nums[i-1]){
//             freq++;
//         }
//         else {
//             freq=1;  //reset the number
//             ans =nums[i];
//         }
//         if (freq>n/2){
//             return ans;
//         }
//     }
//     return ans;
// }
// };
// int main(){
// solution a;
// vector<int>vec={0,0,1,1,2,2,2,2,2};
// int result=a.majorityElement(vec);
// cout<<result;
//     return 0;
// }




//Moore's Voting algorithm O(n)

// #include<iostream>  //O(n)
// #include<vector>
// #include<algorithm>
// using namespace std;
// class solution{
// public:
// int majorityElement(vector<int>&nums){
//   int frq=0,ans=0;
//   for(int i=0;i<nums.size();i++){
//     if(frq==0){
//         ans=nums[i];
//     }
//     if(ans=nums[i]){
//         frq++;
//     }
//     else{
//         frq--;
//     }
//   }
//   return ans;
// }
// };
// int main(){
// solution a;
// vector<int>vec={0,0,1,1,2,2,2,2,2};
// int result=a.majorityElement(vec);
// cout<<result;
//     return 0;
// }