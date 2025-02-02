class Solution {
public:
//  vector<int> Rotate(int x,int n,vector<int>&nums){
//  vector<int>temp(n);
//     for(int i=0;i<x;i++){
//         temp[i]=nums[n-x+i];

//     }

//      for(int i=x;i<n;i++){
//         temp[x]=nums[i-x];

//     }
//     return temp;
//  }
    
    bool check(vector<int>& nums) {
        int n=nums.size();
int count=0;
// vector<int>temp2(n);
        for(int i=0;i<n;i++){
            // vector<int>temp2(n)=Rotate(i,n,nums);
          if(nums[i]>nums[(i+1)%n]){
            count++;
          }
        }
    return count<=1;
    }
};