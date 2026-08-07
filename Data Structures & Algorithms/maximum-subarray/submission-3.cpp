class Solution {
public:

    int maxSubArray(vector<int>& nums) {
        int res = INT_MIN;
        int sum = 0;
        for (int i=0;i<nums.size();i++) {
            sum += nums[i];
            res = max(res, sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        return res;

        // for(int i=0;i<nums.size();i++){
        //     int sum = nums[i];
        //     for(int j=i+1;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum<0) i = j;
        //         res=max(res,sum);
        //     }
        // }
        // int l =0,r=0,sum=0;
        // while(l<=r && l<nums.size() && r<nums.size()){
        //     sum+=nums[r];
        //     res=max(res,sum);
        //     if(sum<0){
        //         l = r;
        //         sum = 0;
        //     }
        //     r++;
        // }
        // return res;
    }
};


// 10^6 = logn
// 10^5 = nlogn or n
// 10^4 = n2
