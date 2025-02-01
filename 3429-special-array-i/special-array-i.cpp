class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        if(n==0|| n==1){
            return true;
        }
     int count=0;
        // for(int i=0;i<n;i++){
        //     if((i<n-1) && (nums[i]%2==0 && nums[i]%2!=0 )|| (nums[i]%2!=0 && nums[i]%2==0)){
        //        return true;
        //     }
        // }
        for(int i=0;i<n-1;i++){
             if((nums[i]%2==0 && nums[i+1]%2==0 )|| (nums[i]%2!=0 && nums[i+1]%2!=0)){
                count++;
    }
        }
        if(count==0){
            return true;
        }
        return false;
    }
};