#include<iostream>//O(n2)
#include<vector>
using namespace std;
class Solution{
public:
int maxArea(vector<int>&height){
int maxWater=0;//ans
int lp=0,rp=height.size()-1;

while(lp<rp){
  int w=rp-lp;
  int ht=min(height[rp],height[lp]);
  int currWater=w*ht;
  maxWater=max(maxWater,currWater);
  if(height[lp]<height[rp]){
    lp++;
  }
  else{
    rp--;
  }
}
return maxWater;
}
};
int main(){
  vector<int>water={1,8,6,2,5,4,8,3,7};
  Solution a;
  int result =a.maxArea(water);
  cout<<result<<" ";
  return 0;
}





// #include<iostream>//O(n2)
// #include<vector>
// using namespace std;
// class Solution{
// public:
// int maxArea(vector<int>&height){
// int maxWater=0;//ans
// for(int i=0;i<height.size();i++){
//   for(int j=i+1;j<height.size();j++){
//     int w=j-i;
//     int ht=min(height[i],height[j]);
//     int currWater=w*ht;
//    maxWater=max(maxWater,currWater); 
//   }
// }
// return maxWater;
// }
// };
// int main(){
//   vector<int>water={1,8,6,2,5,4,8,3,7};
//   Solution a;
//   int result =a.maxArea(water);
//   cout<<result<<" ";
//   return 0;
// }