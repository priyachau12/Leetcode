class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        //Prefix max
        vector<int>prefixMax(n);
         prefixMax[0]=height[0];
        for(int i=1;i<n;i++){
            prefixMax[i]=max(prefixMax[i-1],height[i]);
        }

        //Suffix max
      //last se strat karenge
       vector<int>suffixMax(n);
         suffixMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            suffixMax[i]=max(suffixMax[i+1],height[i]);
        }
     int count=0;
       for(int i=0;i<n;i++){
       int leftMax=prefixMax[i];
        int RightMax=suffixMax[i];
        if(height[i]<leftMax && height[i]<RightMax){
            count+=min(leftMax,RightMax)-height[i];
        }
       }
      
return count;
    }
};